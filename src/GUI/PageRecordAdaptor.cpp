/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp -c PageRecordAdaptor -a PageRecordAdaptor.h:PageRecordAdaptor.cpp be.maartenbaert.xml
 *
 * qdbusxml2cpp is Copyright (C) 2013 Digia Plc and/or its subsidiary(-ies).
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#include "PageRecordAdaptor.h"
#include <QtCore/QMetaObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>

/*
 * Implementation of adaptor class PageRecordAdaptor
 */

PageRecordAdaptor::PageRecordAdaptor(QObject *parent)
    : QDBusAbstractAdaptor(parent)
{
    // constructor
    setAutoRelaySignals(true);
}

PageRecordAdaptor::~PageRecordAdaptor()
{
    // destructor
}

void PageRecordAdaptor::OnCancel()
{
    // handle method call local.PageRecord.OnCancel
    QMetaObject::invokeMethod(parent(), "OnCancel");
}

void PageRecordAdaptor::OnRecordStartPause()
{
    // handle method call local.PageRecord.OnRecordStartPause
    QMetaObject::invokeMethod(parent(), "OnRecordStartPause");
}

void PageRecordAdaptor::OnSave()
{
    // handle method call local.PageRecord.OnSave
    QMetaObject::invokeMethod(parent(), "OnSave");
}

void PageRecordAdaptor::OnUpdateHotkey()
{
    // handle method call local.PageRecord.OnUpdateHotkey
    QMetaObject::invokeMethod(parent(), "OnUpdateHotkey");
}

void PageRecordAdaptor::OnUpdateHotkeyFields()
{
    // handle method call local.PageRecord.OnUpdateHotkeyFields
    QMetaObject::invokeMethod(parent(), "OnUpdateHotkeyFields");
}

void PageRecordAdaptor::OnUpdateSoundNotifications()
{
    // handle method call local.PageRecord.OnUpdateSoundNotifications
    QMetaObject::invokeMethod(parent(), "OnUpdateSoundNotifications");
}

