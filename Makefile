#############################################################################
# Makefile for building: KAWA-GCODE
# Generated by qmake (3.0) (Qt 5.5.1)
# Project:  KAWA-GCODE.pro
# Template: app
# Command: S:\Soft\Qt5.5.1\5.5\mingw492_32\bin\qmake.exe -spec win32-g++ "CONFIG+=debug" -o Makefile KAWA-GCODE.pro
#############################################################################

MAKEFILE      = Makefile

first: debug
install: debug-install
uninstall: debug-uninstall
QMAKE         = S:\Soft\Qt5.5.1\5.5\mingw492_32\bin\qmake.exe
DEL_FILE      = del
CHK_DIR_EXISTS= if not exist
MKDIR         = mkdir
COPY          = copy /y
COPY_FILE     = copy /y
COPY_DIR      = xcopy /s /q /y /i
INSTALL_FILE  = copy /y
INSTALL_PROGRAM = copy /y
INSTALL_DIR   = xcopy /s /q /y /i
DEL_FILE      = del
SYMLINK       = $(QMAKE) -install ln -f -s
DEL_DIR       = rmdir
MOVE          = move
SUBTARGETS    =  \
		debug \
		release


debug: FORCE
	$(MAKE) -f $(MAKEFILE).Debug
debug-make_first: FORCE
	$(MAKE) -f $(MAKEFILE).Debug 
debug-all: FORCE
	$(MAKE) -f $(MAKEFILE).Debug all
debug-clean: FORCE
	$(MAKE) -f $(MAKEFILE).Debug clean
debug-distclean: FORCE
	$(MAKE) -f $(MAKEFILE).Debug distclean
debug-install: FORCE
	$(MAKE) -f $(MAKEFILE).Debug install
debug-uninstall: FORCE
	$(MAKE) -f $(MAKEFILE).Debug uninstall
release: FORCE
	$(MAKE) -f $(MAKEFILE).Release
release-make_first: FORCE
	$(MAKE) -f $(MAKEFILE).Release 
release-all: FORCE
	$(MAKE) -f $(MAKEFILE).Release all
release-clean: FORCE
	$(MAKE) -f $(MAKEFILE).Release clean
release-distclean: FORCE
	$(MAKE) -f $(MAKEFILE).Release distclean
release-install: FORCE
	$(MAKE) -f $(MAKEFILE).Release install
release-uninstall: FORCE
	$(MAKE) -f $(MAKEFILE).Release uninstall

Makefile: KAWA-GCODE.pro S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/win32-g++/qmake.conf S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/features/spec_pre.prf \
		S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/qdevice.pri \
		S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/features/device_config.prf \
		S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/qconfig.pri \
		S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_3dcollision.pri \
		S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_3dcollision_private.pri \
		S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_3dcore.pri \
		S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_3dcore_private.pri \
		S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_3dinput.pri \
		S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_3dinput_private.pri \
		S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_3dlogic.pri \
		S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_3dlogic_private.pri \
		S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_3dquick.pri \
		S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_3dquick_private.pri \
		S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_3dquickrenderer.pri \
		S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_3dquickrenderer_private.pri \
		S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_3drenderer.pri \
		S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_3drenderer_private.pri \
		S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_axbase.pri \
		S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_axbase_private.pri \
		S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_axcontainer.pri \
		S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_axcontainer_private.pri \
		S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_axserver.pri \
		S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_axserver_private.pri \
		S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_bluetooth.pri \
		S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_bluetooth_private.pri \
		S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_bootstrap_private.pri \
		S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_clucene_private.pri \
		S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_concurrent.pri \
		S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_concurrent_private.pri \
		S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_core.pri \
		S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_core_private.pri \
		S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_dbus.pri \
		S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_dbus_private.pri \
		S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_declarative.pri \
		S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_declarative_private.pri \
		S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_designer.pri \
		S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_designer_private.pri \
		S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_designercomponents_private.pri \
		S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_enginio.pri \
		S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_enginio_private.pri \
		S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_gui.pri \
		S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_gui_private.pri \
		S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_help.pri \
		S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_help_private.pri \
		S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_location.pri \
		S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_location_private.pri \
		S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_multimedia.pri \
		S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_multimedia_private.pri \
		S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_multimediawidgets.pri \
		S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_multimediawidgets_private.pri \
		S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_network.pri \
		S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_network_private.pri \
		S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_nfc.pri \
		S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_nfc_private.pri \
		S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_opengl.pri \
		S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_opengl_private.pri \
		S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_openglextensions.pri \
		S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_openglextensions_private.pri \
		S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_platformsupport_private.pri \
		S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_positioning.pri \
		S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_positioning_private.pri \
		S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_printsupport.pri \
		S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_printsupport_private.pri \
		S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_qml.pri \
		S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_qml_private.pri \
		S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_qmldevtools_private.pri \
		S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_qmltest.pri \
		S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_qmltest_private.pri \
		S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_qtmultimediaquicktools_private.pri \
		S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_quick.pri \
		S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_quick_private.pri \
		S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_quickparticles_private.pri \
		S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_quickwidgets.pri \
		S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_quickwidgets_private.pri \
		S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_script.pri \
		S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_script_private.pri \
		S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_scripttools.pri \
		S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_scripttools_private.pri \
		S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_sensors.pri \
		S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_sensors_private.pri \
		S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_serialport.pri \
		S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_serialport_private.pri \
		S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_sql.pri \
		S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_sql_private.pri \
		S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_svg.pri \
		S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_svg_private.pri \
		S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_testlib.pri \
		S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_testlib_private.pri \
		S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_uiplugin.pri \
		S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_uitools.pri \
		S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_uitools_private.pri \
		S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_webchannel.pri \
		S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_webchannel_private.pri \
		S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_webkit.pri \
		S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_webkit_private.pri \
		S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_webkitwidgets.pri \
		S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_webkitwidgets_private.pri \
		S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_websockets.pri \
		S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_websockets_private.pri \
		S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_widgets.pri \
		S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_widgets_private.pri \
		S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_winextras.pri \
		S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_winextras_private.pri \
		S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_xml.pri \
		S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_xml_private.pri \
		S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_xmlpatterns.pri \
		S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_xmlpatterns_private.pri \
		S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/features/qt_functions.prf \
		S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/features/qt_config.prf \
		S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/features/win32/qt_config.prf \
		S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/win32-g++/qmake.conf \
		S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/features/spec_post.prf \
		S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/features/exclusive_builds.prf \
		S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/features/default_pre.prf \
		S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/features/win32/default_pre.prf \
		S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/features/resolve_config.prf \
		S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/features/exclusive_builds_post.prf \
		S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/features/default_post.prf \
		S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/features/win32/rtti.prf \
		S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/features/precompile_header.prf \
		S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/features/warn_on.prf \
		S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/features/qt.prf \
		S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/features/resources.prf \
		S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/features/moc.prf \
		S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/features/win32/opengl.prf \
		S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/features/uic.prf \
		S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/features/win32/windows.prf \
		S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/features/testcase_targets.prf \
		S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/features/exceptions.prf \
		S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/features/yacc.prf \
		S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/features/lex.prf \
		KAWA-GCODE.pro \
		S:/Soft/Qt5.5.1/5.5/mingw492_32/lib/qtmaind.prl \
		S:/Soft/Qt5.5.1/5.5/mingw492_32/lib/Qt5Widgets.prl \
		S:/Soft/Qt5.5.1/5.5/mingw492_32/lib/Qt5Gui.prl \
		S:/Soft/Qt5.5.1/5.5/mingw492_32/lib/Qt5Core.prl
	$(QMAKE) -spec win32-g++ "CONFIG+=debug" -o Makefile KAWA-GCODE.pro
S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/features/spec_pre.prf:
S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/qdevice.pri:
S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/features/device_config.prf:
S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/qconfig.pri:
S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_3dcollision.pri:
S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_3dcollision_private.pri:
S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_3dcore.pri:
S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_3dcore_private.pri:
S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_3dinput.pri:
S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_3dinput_private.pri:
S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_3dlogic.pri:
S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_3dlogic_private.pri:
S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_3dquick.pri:
S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_3dquick_private.pri:
S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_3dquickrenderer.pri:
S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_3dquickrenderer_private.pri:
S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_3drenderer.pri:
S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_3drenderer_private.pri:
S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_axbase.pri:
S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_axbase_private.pri:
S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_axcontainer.pri:
S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_axcontainer_private.pri:
S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_axserver.pri:
S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_axserver_private.pri:
S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_bluetooth.pri:
S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_bluetooth_private.pri:
S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_bootstrap_private.pri:
S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_clucene_private.pri:
S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_concurrent.pri:
S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_concurrent_private.pri:
S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_core.pri:
S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_core_private.pri:
S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_dbus.pri:
S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_dbus_private.pri:
S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_declarative.pri:
S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_declarative_private.pri:
S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_designer.pri:
S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_designer_private.pri:
S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_designercomponents_private.pri:
S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_enginio.pri:
S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_enginio_private.pri:
S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_gui.pri:
S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_gui_private.pri:
S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_help.pri:
S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_help_private.pri:
S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_location.pri:
S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_location_private.pri:
S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_multimedia.pri:
S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_multimedia_private.pri:
S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_multimediawidgets.pri:
S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_multimediawidgets_private.pri:
S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_network.pri:
S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_network_private.pri:
S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_nfc.pri:
S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_nfc_private.pri:
S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_opengl.pri:
S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_opengl_private.pri:
S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_openglextensions.pri:
S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_openglextensions_private.pri:
S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_platformsupport_private.pri:
S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_positioning.pri:
S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_positioning_private.pri:
S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_printsupport.pri:
S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_printsupport_private.pri:
S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_qml.pri:
S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_qml_private.pri:
S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_qmldevtools_private.pri:
S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_qmltest.pri:
S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_qmltest_private.pri:
S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_qtmultimediaquicktools_private.pri:
S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_quick.pri:
S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_quick_private.pri:
S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_quickparticles_private.pri:
S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_quickwidgets.pri:
S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_quickwidgets_private.pri:
S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_script.pri:
S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_script_private.pri:
S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_scripttools.pri:
S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_scripttools_private.pri:
S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_sensors.pri:
S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_sensors_private.pri:
S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_serialport.pri:
S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_serialport_private.pri:
S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_sql.pri:
S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_sql_private.pri:
S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_svg.pri:
S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_svg_private.pri:
S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_testlib.pri:
S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_testlib_private.pri:
S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_uiplugin.pri:
S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_uitools.pri:
S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_uitools_private.pri:
S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_webchannel.pri:
S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_webchannel_private.pri:
S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_webkit.pri:
S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_webkit_private.pri:
S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_webkitwidgets.pri:
S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_webkitwidgets_private.pri:
S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_websockets.pri:
S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_websockets_private.pri:
S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_widgets.pri:
S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_widgets_private.pri:
S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_winextras.pri:
S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_winextras_private.pri:
S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_xml.pri:
S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_xml_private.pri:
S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_xmlpatterns.pri:
S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/modules/qt_lib_xmlpatterns_private.pri:
S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/features/qt_functions.prf:
S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/features/qt_config.prf:
S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/features/win32/qt_config.prf:
S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/win32-g++/qmake.conf:
S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/features/spec_post.prf:
S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/features/exclusive_builds.prf:
S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/features/default_pre.prf:
S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/features/win32/default_pre.prf:
S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/features/resolve_config.prf:
S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/features/exclusive_builds_post.prf:
S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/features/default_post.prf:
S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/features/win32/rtti.prf:
S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/features/precompile_header.prf:
S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/features/warn_on.prf:
S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/features/qt.prf:
S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/features/resources.prf:
S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/features/moc.prf:
S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/features/win32/opengl.prf:
S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/features/uic.prf:
S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/features/win32/windows.prf:
S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/features/testcase_targets.prf:
S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/features/exceptions.prf:
S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/features/yacc.prf:
S:/Soft/Qt5.5.1/5.5/mingw492_32/mkspecs/features/lex.prf:
KAWA-GCODE.pro:
S:/Soft/Qt5.5.1/5.5/mingw492_32/lib/qtmaind.prl:
S:/Soft/Qt5.5.1/5.5/mingw492_32/lib/Qt5Widgets.prl:
S:/Soft/Qt5.5.1/5.5/mingw492_32/lib/Qt5Gui.prl:
S:/Soft/Qt5.5.1/5.5/mingw492_32/lib/Qt5Core.prl:
qmake: FORCE
	@$(QMAKE) -spec win32-g++ "CONFIG+=debug" -o Makefile KAWA-GCODE.pro

qmake_all: FORCE

make_first: debug-make_first release-make_first  FORCE
all: debug-all release-all  FORCE
clean: debug-clean release-clean  FORCE
distclean: debug-distclean release-distclean  FORCE
	-$(DEL_FILE) Makefile

debug-mocclean:
	$(MAKE) -f $(MAKEFILE).Debug mocclean
release-mocclean:
	$(MAKE) -f $(MAKEFILE).Release mocclean
mocclean: debug-mocclean release-mocclean

debug-mocables:
	$(MAKE) -f $(MAKEFILE).Debug mocables
release-mocables:
	$(MAKE) -f $(MAKEFILE).Release mocables
mocables: debug-mocables release-mocables

check: first
FORCE:

$(MAKEFILE).Debug: Makefile
$(MAKEFILE).Release: Makefile
