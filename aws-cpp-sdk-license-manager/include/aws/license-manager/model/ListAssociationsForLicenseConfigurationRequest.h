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
#include <aws/license-manager/LicenseManager_EXPORTS.h>
#include <aws/license-manager/LicenseManagerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace LicenseManager
{
namespace Model
{

  /**
   */
  class AWS_LICENSEMANAGER_API ListAssociationsForLicenseConfigurationRequest : public LicenseManagerRequest
  {
  public:
    ListAssociationsForLicenseConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListAssociationsForLicenseConfiguration"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Amazon Resource Name (ARN) of a license configuration.</p>
     */
    inline const Aws::String& GetLicenseConfigurationArn() const{ return m_licenseConfigurationArn; }

    /**
     * <p>Amazon Resource Name (ARN) of a license configuration.</p>
     */
    inline bool LicenseConfigurationArnHasBeenSet() const { return m_licenseConfigurationArnHasBeenSet; }

    /**
     * <p>Amazon Resource Name (ARN) of a license configuration.</p>
     */
    inline void SetLicenseConfigurationArn(const Aws::String& value) { m_licenseConfigurationArnHasBeenSet = true; m_licenseConfigurationArn = value; }

    /**
     * <p>Amazon Resource Name (ARN) of a license configuration.</p>
     */
    inline void SetLicenseConfigurationArn(Aws::String&& value) { m_licenseConfigurationArnHasBeenSet = true; m_licenseConfigurationArn = std::move(value); }

    /**
     * <p>Amazon Resource Name (ARN) of a license configuration.</p>
     */
    inline void SetLicenseConfigurationArn(const char* value) { m_licenseConfigurationArnHasBeenSet = true; m_licenseConfigurationArn.assign(value); }

    /**
     * <p>Amazon Resource Name (ARN) of a license configuration.</p>
     */
    inline ListAssociationsForLicenseConfigurationRequest& WithLicenseConfigurationArn(const Aws::String& value) { SetLicenseConfigurationArn(value); return *this;}

    /**
     * <p>Amazon Resource Name (ARN) of a license configuration.</p>
     */
    inline ListAssociationsForLicenseConfigurationRequest& WithLicenseConfigurationArn(Aws::String&& value) { SetLicenseConfigurationArn(std::move(value)); return *this;}

    /**
     * <p>Amazon Resource Name (ARN) of a license configuration.</p>
     */
    inline ListAssociationsForLicenseConfigurationRequest& WithLicenseConfigurationArn(const char* value) { SetLicenseConfigurationArn(value); return *this;}


    /**
     * <p>Maximum number of results to return in a single call.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>Maximum number of results to return in a single call.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>Maximum number of results to return in a single call.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>Maximum number of results to return in a single call.</p>
     */
    inline ListAssociationsForLicenseConfigurationRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>Token for the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Token for the next set of results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>Token for the next set of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>Token for the next set of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>Token for the next set of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>Token for the next set of results.</p>
     */
    inline ListAssociationsForLicenseConfigurationRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Token for the next set of results.</p>
     */
    inline ListAssociationsForLicenseConfigurationRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Token for the next set of results.</p>
     */
    inline ListAssociationsForLicenseConfigurationRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_licenseConfigurationArn;
    bool m_licenseConfigurationArnHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
  };

} // namespace Model
} // namespace LicenseManager
} // namespace Aws
