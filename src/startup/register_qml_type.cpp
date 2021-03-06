/***************************************************************************************************
**
** $QTCARTO_BEGIN_LICENSE:GPL3$
**
** Copyright (C) 2016 Fabrice Salvaire
** Contact: http://www.fabrice-salvaire.fr
**
** This file is part of the QtCarto library.
**
** This program is free software: you can redistribute it and/or modify
** it under the terms of the GNU General Public License as published by
** the Free Software Foundation, either version 3 of the License, or
** (at your option) any later version.
**
** This program is distributed in the hope that it will be useful,
** but WITHOUT ANY WARRANTY; without even the implied warranty of
** MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
** GNU General Public License for more details.
**
** You should have received a copy of the GNU General Public License
** along with this program.  If not, see <http://www.gnu.org/licenses/>.
**
** $QTCARTO_END_LICENSE$
**
***************************************************************************************************/

/**************************************************************************************************/

#include <QQmlApplicationEngine>
#include <QtDebug>
#include <QtQml>

#include "startup.h"
#include "ephemeride/ephemeride.h"
#include "refuge/refuge.h"
#include "satellite_model/satellite_model.h"
#include "sensors/qml_barimeter_altimeter_sensor.h"

/**************************************************************************************************/

void
register_qml_types()
{
  const char * package = "Local";
  int major = 1;
  int minor = 0;

  // qmlRegisterType<AndroidActivity >(package, major, minor, "AndroidActivity");

  // qmlRegisterSingletonType  <QmlSensorGlobal             >(package, major, minor, "QmlSensors", global_object_50);
  // qmlRegisterUncreatableType<QmlSensorRange              >(package, major, minor, "Range",                QLatin1String("Cannot create Range"));
  // qmlRegisterUncreatableType<QmlSensorOutputRange        >(package, major, minor, "OutputRange",          QLatin1String("Cannot create OutputRange"));
  // qmlRegisterUncreatableType<QmlSensor                   >(package, major, minor, "Sensor",               QLatin1String("Cannot create Sensor"));
  // qmlRegisterUncreatableType<QmlSensorReading            >(package, major, minor, "SensorReading",        QLatin1String("Cannot create SensorReading"));
  qmlRegisterType<QmlBarometerAltimeterSensor >(package, major, minor, "BarimeterAltimeterSensor");
  qmlRegisterUncreatableType<QmlBarometerAltimeterReading >(package, major, minor, "BarimeterAltimeterReading", QLatin1String("Cannot create PressureReading"));

  qmlRegisterType<SatelliteModel>(package, major, minor, "SatelliteModel");

  // qmlRegisterType<Refuge>(package, major, minor, "Refuge");
  // qmlRegisterType<RefugeModel>(package, major, minor, "RefugeModel");

  // qmlRegisterType<Ephemeride>(package, major, minor, "Ephemeride");
}

/***************************************************************************************************
 *
 * End
 *
 **************************************************************************************************/
