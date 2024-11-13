QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    fm_novocontato.cpp \
    fm_pesquisacontatos.cpp \
    fm_principal.cpp \
    main.cpp \
    janelalogin.cpp

HEADERS += \
    fm_novocontato.h \
    fm_pesquisacontatos.h \
    fm_principal.h \
    janelalogin.h

FORMS += \
    fm_novocontato.ui \
    fm_pesquisacontatos.ui \
    fm_principal.ui \
    janelalogin.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
