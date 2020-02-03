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
#include <aws/outposts/Outposts_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/outposts/model/Site.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Outposts
{
namespace Model
{
  class AWS_OUTPOSTS_API ListSitesResult
  {
  public:
    ListSitesResult();
    ListSitesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListSitesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Aws::Vector<Site>& GetSites() const{ return m_sites; }

    
    inline void SetSites(const Aws::Vector<Site>& value) { m_sites = value; }

    
    inline void SetSites(Aws::Vector<Site>&& value) { m_sites = std::move(value); }

    
    inline ListSitesResult& WithSites(const Aws::Vector<Site>& value) { SetSites(value); return *this;}

    
    inline ListSitesResult& WithSites(Aws::Vector<Site>&& value) { SetSites(std::move(value)); return *this;}

    
    inline ListSitesResult& AddSites(const Site& value) { m_sites.push_back(value); return *this; }

    
    inline ListSitesResult& AddSites(Site&& value) { m_sites.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    
    inline ListSitesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    
    inline ListSitesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    
    inline ListSitesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Site> m_sites;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Outposts
} // namespace Aws
