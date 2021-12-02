/*
 * Copyright (C) 2021 Open Source Robotics Foundation
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
*/
#ifndef IGNITION_GAZEBO_GUI_COMPONENTINSPECTOR_MAGNETOMETER_HH_
#define IGNITION_GAZEBO_GUI_COMPONENTINSPECTOR_MAGNETOMETER_HH_

#include <ignition/gazebo/gui/GuiSystem.hh>

namespace ignition
{
namespace gazebo
{
  class ComponentInspector;

  /// \brief A class that handles magnetometer changes.
  class Magnetometer : public QObject
  {
    Q_OBJECT

    /// \brief Constructor
    /// \param[in] _inspector The component inspector.
    public: explicit Magnetometer(ComponentInspector *_inspector);

    /// \brief This function is called when a user changes values in the
    /// x noise elements
    /// \param[in] _mean Mean value
    /// \param[in] _meanBias Bias mean value
    /// \param[in] _stdDev Standard deviation value
    /// \param[in] _stdDevBias Bias standard deviation value
    /// \param[in] _dynamicBiasStdDev Dynamic bias standard deviation value
    /// \param[in] _dynamicBiasCorrelationTime Dynamic bias correlation time
    /// value
    public: Q_INVOKABLE void OnMagnetometerXNoise(
        double _mean, double _meanBias, double _stdDev,
        double _stdDevBias, double _dynamicBiasStdDev,
        double _dynamicBiasCorrelationTime);

    /// \brief This function is called when a user changes values in the
    /// y noise elements
    /// \param[in] _mean Mean value
    /// \param[in] _meanBias Bias mean value
    /// \param[in] _stdDev Standard deviation value
    /// \param[in] _stdDevBias Bias standard deviation value
    /// \param[in] _dynamicBiasStdDev Dynamic bias standard deviation value
    /// \param[in] _dynamicBiasCorrelationTime Dynamic bias correlation time
    /// value
    public: Q_INVOKABLE void OnMagnetometerYNoise(
        double _mean, double _meanBias, double _stdDev,
        double _stdDevBias, double _dynamicBiasStdDev,
        double _dynamicBiasCorrelationTime);

    /// \brief This function is called when a user changes values in the
    /// z noise elements
    /// \param[in] _mean Mean value
    /// \param[in] _meanBias Bias mean value
    /// \param[in] _stdDev Standard deviation value
    /// \param[in] _stdDevBias Bias standard deviation value
    /// \param[in] _dynamicBiasStdDev Dynamic bias standard deviation value
    /// \param[in] _dynamicBiasCorrelationTime Dynamic bias correlation time
    /// value
    public: Q_INVOKABLE void OnMagnetometerZNoise(
        double _mean, double _meanBias, double _stdDev,
        double _stdDevBias, double _dynamicBiasStdDev,
        double _dynamicBiasCorrelationTime);

    /// \brief Pointer to the component inspector. This is used to add
    /// update callbacks that modify the ECM.
    private: ComponentInspector *inspector{nullptr};
  };
}
}
#endif