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
#include <aws/cloudsearch/CloudSearch_EXPORTS.h>
#include <aws/cloudsearch/CloudSearchRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CloudSearch
{
namespace Model
{

  /**
   * <p>Container for the parameters to the
   * <code><a>DescribeDomainEndpointOptions</a></code> operation. Specify the name of
   * the domain you want to describe. To show the active configuration and exclude
   * any pending changes, set the Deployed option to <code>true</code>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudsearch-2013-01-01/DescribeDomainEndpointOptionsRequest">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDSEARCH_API DescribeDomainEndpointOptionsRequest : public CloudSearchRequest
  {
  public:
    DescribeDomainEndpointOptionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeDomainEndpointOptions"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>A string that represents the name of a domain.</p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }

    /**
     * <p>A string that represents the name of a domain.</p>
     */
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }

    /**
     * <p>A string that represents the name of a domain.</p>
     */
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    /**
     * <p>A string that represents the name of a domain.</p>
     */
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }

    /**
     * <p>A string that represents the name of a domain.</p>
     */
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }

    /**
     * <p>A string that represents the name of a domain.</p>
     */
    inline DescribeDomainEndpointOptionsRequest& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    /**
     * <p>A string that represents the name of a domain.</p>
     */
    inline DescribeDomainEndpointOptionsRequest& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}

    /**
     * <p>A string that represents the name of a domain.</p>
     */
    inline DescribeDomainEndpointOptionsRequest& WithDomainName(const char* value) { SetDomainName(value); return *this;}


    /**
     * <p>Whether to retrieve the latest configuration (which might be in a Processing
     * state) or the current, active configuration. Defaults to <code>false</code>.</p>
     */
    inline bool GetDeployed() const{ return m_deployed; }

    /**
     * <p>Whether to retrieve the latest configuration (which might be in a Processing
     * state) or the current, active configuration. Defaults to <code>false</code>.</p>
     */
    inline bool DeployedHasBeenSet() const { return m_deployedHasBeenSet; }

    /**
     * <p>Whether to retrieve the latest configuration (which might be in a Processing
     * state) or the current, active configuration. Defaults to <code>false</code>.</p>
     */
    inline void SetDeployed(bool value) { m_deployedHasBeenSet = true; m_deployed = value; }

    /**
     * <p>Whether to retrieve the latest configuration (which might be in a Processing
     * state) or the current, active configuration. Defaults to <code>false</code>.</p>
     */
    inline DescribeDomainEndpointOptionsRequest& WithDeployed(bool value) { SetDeployed(value); return *this;}

  private:

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet;

    bool m_deployed;
    bool m_deployedHasBeenSet;
  };

} // namespace Model
} // namespace CloudSearch
} // namespace Aws
