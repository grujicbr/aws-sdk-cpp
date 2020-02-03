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

#include <aws/greengrass/model/LoggerLevel.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Greengrass
  {
    namespace Model
    {
      namespace LoggerLevelMapper
      {

        static const int DEBUG__HASH = HashingUtils::HashString("DEBUG");
        static const int INFO_HASH = HashingUtils::HashString("INFO");
        static const int WARN_HASH = HashingUtils::HashString("WARN");
        static const int ERROR__HASH = HashingUtils::HashString("ERROR");
        static const int FATAL_HASH = HashingUtils::HashString("FATAL");


        LoggerLevel GetLoggerLevelForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DEBUG__HASH)
          {
            return LoggerLevel::DEBUG_;
          }
          else if (hashCode == INFO_HASH)
          {
            return LoggerLevel::INFO;
          }
          else if (hashCode == WARN_HASH)
          {
            return LoggerLevel::WARN;
          }
          else if (hashCode == ERROR__HASH)
          {
            return LoggerLevel::ERROR_;
          }
          else if (hashCode == FATAL_HASH)
          {
            return LoggerLevel::FATAL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LoggerLevel>(hashCode);
          }

          return LoggerLevel::NOT_SET;
        }

        Aws::String GetNameForLoggerLevel(LoggerLevel enumValue)
        {
          switch(enumValue)
          {
          case LoggerLevel::DEBUG_:
            return "DEBUG";
          case LoggerLevel::INFO:
            return "INFO";
          case LoggerLevel::WARN:
            return "WARN";
          case LoggerLevel::ERROR_:
            return "ERROR";
          case LoggerLevel::FATAL:
            return "FATAL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LoggerLevelMapper
    } // namespace Model
  } // namespace Greengrass
} // namespace Aws
