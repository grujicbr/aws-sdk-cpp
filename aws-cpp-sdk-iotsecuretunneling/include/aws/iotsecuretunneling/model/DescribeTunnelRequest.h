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
#include <aws/iotsecuretunneling/IoTSecureTunneling_EXPORTS.h>
#include <aws/iotsecuretunneling/IoTSecureTunnelingRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace IoTSecureTunneling
{
namespace Model
{

  /**
   */
  class AWS_IOTSECURETUNNELING_API DescribeTunnelRequest : public IoTSecureTunnelingRequest
  {
  public:
    DescribeTunnelRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeTunnel"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The tunnel to describe.</p>
     */
    inline const Aws::String& GetTunnelId() const{ return m_tunnelId; }

    /**
     * <p>The tunnel to describe.</p>
     */
    inline bool TunnelIdHasBeenSet() const { return m_tunnelIdHasBeenSet; }

    /**
     * <p>The tunnel to describe.</p>
     */
    inline void SetTunnelId(const Aws::String& value) { m_tunnelIdHasBeenSet = true; m_tunnelId = value; }

    /**
     * <p>The tunnel to describe.</p>
     */
    inline void SetTunnelId(Aws::String&& value) { m_tunnelIdHasBeenSet = true; m_tunnelId = std::move(value); }

    /**
     * <p>The tunnel to describe.</p>
     */
    inline void SetTunnelId(const char* value) { m_tunnelIdHasBeenSet = true; m_tunnelId.assign(value); }

    /**
     * <p>The tunnel to describe.</p>
     */
    inline DescribeTunnelRequest& WithTunnelId(const Aws::String& value) { SetTunnelId(value); return *this;}

    /**
     * <p>The tunnel to describe.</p>
     */
    inline DescribeTunnelRequest& WithTunnelId(Aws::String&& value) { SetTunnelId(std::move(value)); return *this;}

    /**
     * <p>The tunnel to describe.</p>
     */
    inline DescribeTunnelRequest& WithTunnelId(const char* value) { SetTunnelId(value); return *this;}

  private:

    Aws::String m_tunnelId;
    bool m_tunnelIdHasBeenSet;
  };

} // namespace Model
} // namespace IoTSecureTunneling
} // namespace Aws
