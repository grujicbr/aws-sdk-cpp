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
#include <aws/lakeformation/LakeFormation_EXPORTS.h>
#include <aws/lakeformation/LakeFormationRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lakeformation/model/DataLakePrincipal.h>
#include <aws/lakeformation/model/DataLakeResourceType.h>
#include <aws/lakeformation/model/Resource.h>
#include <utility>

namespace Aws
{
namespace LakeFormation
{
namespace Model
{

  /**
   */
  class AWS_LAKEFORMATION_API ListPermissionsRequest : public LakeFormationRequest
  {
  public:
    ListPermissionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListPermissions"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The identifier for the Data Catalog. By default, the account ID. The Data
     * Catalog is the persistent metadata store. It contains database definitions,
     * table definitions, and other control information to manage your AWS Lake
     * Formation environment. </p>
     */
    inline const Aws::String& GetCatalogId() const{ return m_catalogId; }

    /**
     * <p>The identifier for the Data Catalog. By default, the account ID. The Data
     * Catalog is the persistent metadata store. It contains database definitions,
     * table definitions, and other control information to manage your AWS Lake
     * Formation environment. </p>
     */
    inline bool CatalogIdHasBeenSet() const { return m_catalogIdHasBeenSet; }

    /**
     * <p>The identifier for the Data Catalog. By default, the account ID. The Data
     * Catalog is the persistent metadata store. It contains database definitions,
     * table definitions, and other control information to manage your AWS Lake
     * Formation environment. </p>
     */
    inline void SetCatalogId(const Aws::String& value) { m_catalogIdHasBeenSet = true; m_catalogId = value; }

    /**
     * <p>The identifier for the Data Catalog. By default, the account ID. The Data
     * Catalog is the persistent metadata store. It contains database definitions,
     * table definitions, and other control information to manage your AWS Lake
     * Formation environment. </p>
     */
    inline void SetCatalogId(Aws::String&& value) { m_catalogIdHasBeenSet = true; m_catalogId = std::move(value); }

    /**
     * <p>The identifier for the Data Catalog. By default, the account ID. The Data
     * Catalog is the persistent metadata store. It contains database definitions,
     * table definitions, and other control information to manage your AWS Lake
     * Formation environment. </p>
     */
    inline void SetCatalogId(const char* value) { m_catalogIdHasBeenSet = true; m_catalogId.assign(value); }

    /**
     * <p>The identifier for the Data Catalog. By default, the account ID. The Data
     * Catalog is the persistent metadata store. It contains database definitions,
     * table definitions, and other control information to manage your AWS Lake
     * Formation environment. </p>
     */
    inline ListPermissionsRequest& WithCatalogId(const Aws::String& value) { SetCatalogId(value); return *this;}

    /**
     * <p>The identifier for the Data Catalog. By default, the account ID. The Data
     * Catalog is the persistent metadata store. It contains database definitions,
     * table definitions, and other control information to manage your AWS Lake
     * Formation environment. </p>
     */
    inline ListPermissionsRequest& WithCatalogId(Aws::String&& value) { SetCatalogId(std::move(value)); return *this;}

    /**
     * <p>The identifier for the Data Catalog. By default, the account ID. The Data
     * Catalog is the persistent metadata store. It contains database definitions,
     * table definitions, and other control information to manage your AWS Lake
     * Formation environment. </p>
     */
    inline ListPermissionsRequest& WithCatalogId(const char* value) { SetCatalogId(value); return *this;}


    /**
     * <p>Specifies a principal to filter the permissions returned.</p>
     */
    inline const DataLakePrincipal& GetPrincipal() const{ return m_principal; }

    /**
     * <p>Specifies a principal to filter the permissions returned.</p>
     */
    inline bool PrincipalHasBeenSet() const { return m_principalHasBeenSet; }

    /**
     * <p>Specifies a principal to filter the permissions returned.</p>
     */
    inline void SetPrincipal(const DataLakePrincipal& value) { m_principalHasBeenSet = true; m_principal = value; }

    /**
     * <p>Specifies a principal to filter the permissions returned.</p>
     */
    inline void SetPrincipal(DataLakePrincipal&& value) { m_principalHasBeenSet = true; m_principal = std::move(value); }

    /**
     * <p>Specifies a principal to filter the permissions returned.</p>
     */
    inline ListPermissionsRequest& WithPrincipal(const DataLakePrincipal& value) { SetPrincipal(value); return *this;}

    /**
     * <p>Specifies a principal to filter the permissions returned.</p>
     */
    inline ListPermissionsRequest& WithPrincipal(DataLakePrincipal&& value) { SetPrincipal(std::move(value)); return *this;}


    /**
     * <p>Specifies a resource type to filter the permissions returned.</p>
     */
    inline const DataLakeResourceType& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>Specifies a resource type to filter the permissions returned.</p>
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * <p>Specifies a resource type to filter the permissions returned.</p>
     */
    inline void SetResourceType(const DataLakeResourceType& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>Specifies a resource type to filter the permissions returned.</p>
     */
    inline void SetResourceType(DataLakeResourceType&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p>Specifies a resource type to filter the permissions returned.</p>
     */
    inline ListPermissionsRequest& WithResourceType(const DataLakeResourceType& value) { SetResourceType(value); return *this;}

    /**
     * <p>Specifies a resource type to filter the permissions returned.</p>
     */
    inline ListPermissionsRequest& WithResourceType(DataLakeResourceType&& value) { SetResourceType(std::move(value)); return *this;}


    /**
     * <p>A resource where you will get a list of the principal permissions.</p>
     * <p>This operation does not support getting privileges on a table with columns.
     * Instead, call this operation on the table, and the operation returns the table
     * and the table w columns.</p>
     */
    inline const Resource& GetResource() const{ return m_resource; }

    /**
     * <p>A resource where you will get a list of the principal permissions.</p>
     * <p>This operation does not support getting privileges on a table with columns.
     * Instead, call this operation on the table, and the operation returns the table
     * and the table w columns.</p>
     */
    inline bool ResourceHasBeenSet() const { return m_resourceHasBeenSet; }

    /**
     * <p>A resource where you will get a list of the principal permissions.</p>
     * <p>This operation does not support getting privileges on a table with columns.
     * Instead, call this operation on the table, and the operation returns the table
     * and the table w columns.</p>
     */
    inline void SetResource(const Resource& value) { m_resourceHasBeenSet = true; m_resource = value; }

    /**
     * <p>A resource where you will get a list of the principal permissions.</p>
     * <p>This operation does not support getting privileges on a table with columns.
     * Instead, call this operation on the table, and the operation returns the table
     * and the table w columns.</p>
     */
    inline void SetResource(Resource&& value) { m_resourceHasBeenSet = true; m_resource = std::move(value); }

    /**
     * <p>A resource where you will get a list of the principal permissions.</p>
     * <p>This operation does not support getting privileges on a table with columns.
     * Instead, call this operation on the table, and the operation returns the table
     * and the table w columns.</p>
     */
    inline ListPermissionsRequest& WithResource(const Resource& value) { SetResource(value); return *this;}

    /**
     * <p>A resource where you will get a list of the principal permissions.</p>
     * <p>This operation does not support getting privileges on a table with columns.
     * Instead, call this operation on the table, and the operation returns the table
     * and the table w columns.</p>
     */
    inline ListPermissionsRequest& WithResource(Resource&& value) { SetResource(std::move(value)); return *this;}


    /**
     * <p>A continuation token, if this is not the first call to retrieve this
     * list.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A continuation token, if this is not the first call to retrieve this
     * list.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>A continuation token, if this is not the first call to retrieve this
     * list.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>A continuation token, if this is not the first call to retrieve this
     * list.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>A continuation token, if this is not the first call to retrieve this
     * list.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>A continuation token, if this is not the first call to retrieve this
     * list.</p>
     */
    inline ListPermissionsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A continuation token, if this is not the first call to retrieve this
     * list.</p>
     */
    inline ListPermissionsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A continuation token, if this is not the first call to retrieve this
     * list.</p>
     */
    inline ListPermissionsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of results to return.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to return.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to return.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to return.</p>
     */
    inline ListPermissionsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Aws::String m_catalogId;
    bool m_catalogIdHasBeenSet;

    DataLakePrincipal m_principal;
    bool m_principalHasBeenSet;

    DataLakeResourceType m_resourceType;
    bool m_resourceTypeHasBeenSet;

    Resource m_resource;
    bool m_resourceHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;
  };

} // namespace Model
} // namespace LakeFormation
} // namespace Aws
