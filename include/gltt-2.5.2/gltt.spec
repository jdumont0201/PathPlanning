# Note that this is NOT a relocatable package
%define name		gltt
%define version      	2.5.2
%define RELEASE		2
%define rel      	%{?CUSTOM_RELEASE} %{!?CUSTOM_RELEASE:%RELEASE}
%define prefixdir	/usr

Summary:   OpenGL TrueType library
Name:      %{name}
Version:   %{version}
Release:   2
URL:       http://gltt.sourceforge.net
Source:    http://gltt.sourceforge.net/download/%{name}-%{version}.tar.gz
Copyright: GPL
Group:     System Environment/Libraries
BuildRoot: /var/tmp/%{name}-%{version}-root

%description
gltt is a library that allows you to read and draw TrueType fonts in
any OpenGL application. It supports bitmapped and anti-aliased font
drawing as well as vectorized and polygonized drawing.

%package devel
Summary:  Development libraries for gltt
Group:    Development/Libraries
Requires: %{name} = %{version}

%description devel
This package includes the header files and libraries necessary to develop
applications that use gltt.

%prep

%setup -q

%build
CXXFLAGS="$RPM_OPT_FLAGS" ./configure --prefix=%{prefixdir}
make

%install
rm -rf $RPM_BUILD_ROOT

make DESTDIR=$RPM_BUILD_ROOT install

strip $RPM_BUILD_ROOT%{prefixdir}/lib/lib*.so.*.*

%post   -p /sbin/ldconfig
%postun -p /sbin/ldconfig

%clean
rm -rf $RPM_BUILD_ROOT

%files
%defattr(-,root,root)
%doc NEWS README TODO
%{prefixdir}/lib/lib*.so.*.*

%files devel
%defattr(-,root,root)
%{prefixdir}/include/gltt/*.h
%{prefixdir}/lib/lib*.a
%{prefixdir}/lib/lib*.so

%changelog
* Tue Dec 21 1999 Ross Golder <ross@golder.org>
  [2.5-1]
- Made prefix customisable, other minor tidy-ups.

* Tue Dec 21 1999 Arne Coucheron <arneco@online.no>
  [2.5-1]
- changed Source and URL tags

* Mon Mar 15 1999 Arne Coucheron <arneco@online.no>
  [2.4-1]

* Tue Aug 18 1998 Arne Coucheron <arneco@online.no>
  [2.3-1]

* Fri Jun 12 1998 Arne Coucheron <arneco@online.no>
  [2.2-1]

* Tue Jun 02 1998 Arne Coucheron <arneco@online.no>
  [2.1-1]
- changed to using %defattr macro in filelist, this requires rpm 2.5 to build
- using predefined %%{name} and %%{version}, removed %%{PACKAGE_VERSION}
- added -q parameter to %setup
- changed Group: of main and devel package to X11/Libraries

* Mon May 04 1998 Arne Coucheron <arneco@online.no>
  [2.0-1]
- first release
