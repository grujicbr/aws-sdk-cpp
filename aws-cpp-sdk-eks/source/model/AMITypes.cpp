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

#include <aws/eks/model/AMITypes.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EKS
  {
    namespace Model
    {
      namespace AMITypesMapper
      {

        static const int AL2_x86_64_HASH = HashingUtils::HashString("AL2_x86_64");
        static const int AL2_x86_64_GPU_HASH = HashingUtils::HashString("AL2_x86_64_GPU");


        AMITypes GetAMITypesForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AL2_x86_64_HASH)
          {
            return AMITypes::AL2_x86_64;
          }
          else if (hashCode == AL2_x86_64_GPU_HASH)
          {
            return AMITypes::AL2_x86_64_GPU;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AMITypes>(hashCode);
          }

          return AMITypes::NOT_SET;
        }

        Aws::String GetNameForAMITypes(AMITypes enumValue)
        {
          switch(enumValue)
          {
          case AMITypes::AL2_x86_64:
            return "AL2_x86_64";
          case AMITypes::AL2_x86_64_GPU:
            return "AL2_x86_64_GPU";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AMITypesMapper
    } // namespace Model
  } // namespace EKS
} // namespace Aws
