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

#include <aws/networkmanager/model/ValidationExceptionReason.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace NetworkManager
  {
    namespace Model
    {
      namespace ValidationExceptionReasonMapper
      {

        static const int UnknownOperation_HASH = HashingUtils::HashString("UnknownOperation");
        static const int CannotParse_HASH = HashingUtils::HashString("CannotParse");
        static const int FieldValidationFailed_HASH = HashingUtils::HashString("FieldValidationFailed");
        static const int Other_HASH = HashingUtils::HashString("Other");


        ValidationExceptionReason GetValidationExceptionReasonForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == UnknownOperation_HASH)
          {
            return ValidationExceptionReason::UnknownOperation;
          }
          else if (hashCode == CannotParse_HASH)
          {
            return ValidationExceptionReason::CannotParse;
          }
          else if (hashCode == FieldValidationFailed_HASH)
          {
            return ValidationExceptionReason::FieldValidationFailed;
          }
          else if (hashCode == Other_HASH)
          {
            return ValidationExceptionReason::Other;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ValidationExceptionReason>(hashCode);
          }

          return ValidationExceptionReason::NOT_SET;
        }

        Aws::String GetNameForValidationExceptionReason(ValidationExceptionReason enumValue)
        {
          switch(enumValue)
          {
          case ValidationExceptionReason::UnknownOperation:
            return "UnknownOperation";
          case ValidationExceptionReason::CannotParse:
            return "CannotParse";
          case ValidationExceptionReason::FieldValidationFailed:
            return "FieldValidationFailed";
          case ValidationExceptionReason::Other:
            return "Other";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ValidationExceptionReasonMapper
    } // namespace Model
  } // namespace NetworkManager
} // namespace Aws
