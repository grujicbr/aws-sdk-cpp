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

#include <aws/lambda/model/ProvisionedConcurrencyStatusEnum.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Lambda
  {
    namespace Model
    {
      namespace ProvisionedConcurrencyStatusEnumMapper
      {

        static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
        static const int READY_HASH = HashingUtils::HashString("READY");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");


        ProvisionedConcurrencyStatusEnum GetProvisionedConcurrencyStatusEnumForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == IN_PROGRESS_HASH)
          {
            return ProvisionedConcurrencyStatusEnum::IN_PROGRESS;
          }
          else if (hashCode == READY_HASH)
          {
            return ProvisionedConcurrencyStatusEnum::READY;
          }
          else if (hashCode == FAILED_HASH)
          {
            return ProvisionedConcurrencyStatusEnum::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ProvisionedConcurrencyStatusEnum>(hashCode);
          }

          return ProvisionedConcurrencyStatusEnum::NOT_SET;
        }

        Aws::String GetNameForProvisionedConcurrencyStatusEnum(ProvisionedConcurrencyStatusEnum enumValue)
        {
          switch(enumValue)
          {
          case ProvisionedConcurrencyStatusEnum::IN_PROGRESS:
            return "IN_PROGRESS";
          case ProvisionedConcurrencyStatusEnum::READY:
            return "READY";
          case ProvisionedConcurrencyStatusEnum::FAILED:
            return "FAILED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ProvisionedConcurrencyStatusEnumMapper
    } // namespace Model
  } // namespace Lambda
} // namespace Aws
