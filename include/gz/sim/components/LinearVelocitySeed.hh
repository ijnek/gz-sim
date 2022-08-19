/*
 * Copyright (C) 2019 Open Source Robotics Foundation
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
#ifndef GZ_GAZEBO_COMPONENTS_LINEARVELOCITYSEED_HH_
#define GZ_GAZEBO_COMPONENTS_LINEARVELOCITYSEED_HH_

#include <ignition/math/Vector3.hh>
#include <ignition/gazebo/components/Factory.hh>
#include <ignition/gazebo/components/Component.hh>
#include <ignition/gazebo/config.hh>

namespace gz
{
namespace sim
{
// Inline bracket to help doxygen filtering.
inline namespace IGNITION_GAZEBO_VERSION_NAMESPACE {
namespace components
{
  /// \brief A component type that contains linear velocity seed of an entity
  /// expressed in the local frame of the entity and represented by
  /// gz::math::Vector3d. This seed can used to generate linear velocities
  /// by applying transformations and adding noise.
  using LinearVelocitySeed =
      Component<math::Vector3d, class LinearVelocitySeedTag>;
  IGN_GAZEBO_REGISTER_COMPONENT("ign_gazebo_components.LinearVelocitySeed",
                                LinearVelocitySeed)

  /// \brief A component type that contains linear velocity seed of an entity in
  /// the world frame represented by gz::math::Vector3d. This seed can
  /// used to generate linear velocities by applying transformations and adding
  /// noise.
  using WorldLinearVelocitySeed =
      Component<math::Vector3d, class WorldLinearVelocitySeedTag>;
  IGN_GAZEBO_REGISTER_COMPONENT("ign_gazebo_components.WorldLinearVelocitySeed",
                                WorldLinearVelocitySeed)
}
}
}
}

#endif