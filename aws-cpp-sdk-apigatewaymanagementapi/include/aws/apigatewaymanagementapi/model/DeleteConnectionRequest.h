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
#include <aws/apigatewaymanagementapi/ApiGatewayManagementApi_EXPORTS.h>
#include <aws/apigatewaymanagementapi/ApiGatewayManagementApiRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ApiGatewayManagementApi
{
namespace Model
{

  /**
   */
  class AWS_APIGATEWAYMANAGEMENTAPI_API DeleteConnectionRequest : public ApiGatewayManagementApiRequest
  {
  public:
    DeleteConnectionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteConnection"; }

    Aws::String SerializePayload() const override;


    
    inline const Aws::String& GetConnectionId() const{ return m_connectionId; }

    
    inline bool ConnectionIdHasBeenSet() const { return m_connectionIdHasBeenSet; }

    
    inline void SetConnectionId(const Aws::String& value) { m_connectionIdHasBeenSet = true; m_connectionId = value; }

    
    inline void SetConnectionId(Aws::String&& value) { m_connectionIdHasBeenSet = true; m_connectionId = std::move(value); }

    
    inline void SetConnectionId(const char* value) { m_connectionIdHasBeenSet = true; m_connectionId.assign(value); }

    
    inline DeleteConnectionRequest& WithConnectionId(const Aws::String& value) { SetConnectionId(value); return *this;}

    
    inline DeleteConnectionRequest& WithConnectionId(Aws::String&& value) { SetConnectionId(std::move(value)); return *this;}

    
    inline DeleteConnectionRequest& WithConnectionId(const char* value) { SetConnectionId(value); return *this;}

  private:

    Aws::String m_connectionId;
    bool m_connectionIdHasBeenSet;
  };

} // namespace Model
} // namespace ApiGatewayManagementApi
} // namespace Aws
