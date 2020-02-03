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

#pragma once
#include <aws/managedblockchain/ManagedBlockchain_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ManagedBlockchain
{
namespace Model
{
  enum class NetworkStatus
  {
    NOT_SET,
    CREATING,
    AVAILABLE,
    CREATE_FAILED,
    DELETING,
    DELETED
  };

namespace NetworkStatusMapper
{
AWS_MANAGEDBLOCKCHAIN_API NetworkStatus GetNetworkStatusForName(const Aws::String& name);

AWS_MANAGEDBLOCKCHAIN_API Aws::String GetNameForNetworkStatus(NetworkStatus value);
} // namespace NetworkStatusMapper
} // namespace Model
} // namespace ManagedBlockchain
} // namespace Aws
