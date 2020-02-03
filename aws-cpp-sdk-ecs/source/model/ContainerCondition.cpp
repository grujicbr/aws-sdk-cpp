﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/ecs/model/ContainerCondition.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ECS
  {
    namespace Model
    {
      namespace ContainerConditionMapper
      {

        static const int START_HASH = HashingUtils::HashString("START");
        static const int COMPLETE_HASH = HashingUtils::HashString("COMPLETE");
        static const int SUCCESS_HASH = HashingUtils::HashString("SUCCESS");
        static const int HEALTHY_HASH = HashingUtils::HashString("HEALTHY");


        ContainerCondition GetContainerConditionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == START_HASH)
          {
            return ContainerCondition::START;
          }
          else if (hashCode == COMPLETE_HASH)
          {
            return ContainerCondition::COMPLETE;
          }
          else if (hashCode == SUCCESS_HASH)
          {
            return ContainerCondition::SUCCESS;
          }
          else if (hashCode == HEALTHY_HASH)
          {
            return ContainerCondition::HEALTHY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ContainerCondition>(hashCode);
          }

          return ContainerCondition::NOT_SET;
        }

        Aws::String GetNameForContainerCondition(ContainerCondition enumValue)
        {
          switch(enumValue)
          {
          case ContainerCondition::START:
            return "START";
          case ContainerCondition::COMPLETE:
            return "COMPLETE";
          case ContainerCondition::SUCCESS:
            return "SUCCESS";
          case ContainerCondition::HEALTHY:
            return "HEALTHY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ContainerConditionMapper
    } // namespace Model
  } // namespace ECS
} // namespace Aws
