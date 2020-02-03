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
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kendra/model/QueryResultItem.h>
#include <aws/kendra/model/FacetResult.h>
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
namespace kendra
{
namespace Model
{
  class AWS_KENDRA_API QueryResult
  {
  public:
    QueryResult();
    QueryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    QueryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The unique identifier for the search. You use <code>QueryId</code> to
     * identify the search when using the feedback API.</p>
     */
    inline const Aws::String& GetQueryId() const{ return m_queryId; }

    /**
     * <p>The unique identifier for the search. You use <code>QueryId</code> to
     * identify the search when using the feedback API.</p>
     */
    inline void SetQueryId(const Aws::String& value) { m_queryId = value; }

    /**
     * <p>The unique identifier for the search. You use <code>QueryId</code> to
     * identify the search when using the feedback API.</p>
     */
    inline void SetQueryId(Aws::String&& value) { m_queryId = std::move(value); }

    /**
     * <p>The unique identifier for the search. You use <code>QueryId</code> to
     * identify the search when using the feedback API.</p>
     */
    inline void SetQueryId(const char* value) { m_queryId.assign(value); }

    /**
     * <p>The unique identifier for the search. You use <code>QueryId</code> to
     * identify the search when using the feedback API.</p>
     */
    inline QueryResult& WithQueryId(const Aws::String& value) { SetQueryId(value); return *this;}

    /**
     * <p>The unique identifier for the search. You use <code>QueryId</code> to
     * identify the search when using the feedback API.</p>
     */
    inline QueryResult& WithQueryId(Aws::String&& value) { SetQueryId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the search. You use <code>QueryId</code> to
     * identify the search when using the feedback API.</p>
     */
    inline QueryResult& WithQueryId(const char* value) { SetQueryId(value); return *this;}


    /**
     * <p>The results of the search.</p>
     */
    inline const Aws::Vector<QueryResultItem>& GetResultItems() const{ return m_resultItems; }

    /**
     * <p>The results of the search.</p>
     */
    inline void SetResultItems(const Aws::Vector<QueryResultItem>& value) { m_resultItems = value; }

    /**
     * <p>The results of the search.</p>
     */
    inline void SetResultItems(Aws::Vector<QueryResultItem>&& value) { m_resultItems = std::move(value); }

    /**
     * <p>The results of the search.</p>
     */
    inline QueryResult& WithResultItems(const Aws::Vector<QueryResultItem>& value) { SetResultItems(value); return *this;}

    /**
     * <p>The results of the search.</p>
     */
    inline QueryResult& WithResultItems(Aws::Vector<QueryResultItem>&& value) { SetResultItems(std::move(value)); return *this;}

    /**
     * <p>The results of the search.</p>
     */
    inline QueryResult& AddResultItems(const QueryResultItem& value) { m_resultItems.push_back(value); return *this; }

    /**
     * <p>The results of the search.</p>
     */
    inline QueryResult& AddResultItems(QueryResultItem&& value) { m_resultItems.push_back(std::move(value)); return *this; }


    /**
     * <p>Contains the facet results. A <code>FacetResult</code> contains the counts
     * for each attribute key that was specified in the <code>Facets</code> input
     * parameter.</p>
     */
    inline const Aws::Vector<FacetResult>& GetFacetResults() const{ return m_facetResults; }

    /**
     * <p>Contains the facet results. A <code>FacetResult</code> contains the counts
     * for each attribute key that was specified in the <code>Facets</code> input
     * parameter.</p>
     */
    inline void SetFacetResults(const Aws::Vector<FacetResult>& value) { m_facetResults = value; }

    /**
     * <p>Contains the facet results. A <code>FacetResult</code> contains the counts
     * for each attribute key that was specified in the <code>Facets</code> input
     * parameter.</p>
     */
    inline void SetFacetResults(Aws::Vector<FacetResult>&& value) { m_facetResults = std::move(value); }

    /**
     * <p>Contains the facet results. A <code>FacetResult</code> contains the counts
     * for each attribute key that was specified in the <code>Facets</code> input
     * parameter.</p>
     */
    inline QueryResult& WithFacetResults(const Aws::Vector<FacetResult>& value) { SetFacetResults(value); return *this;}

    /**
     * <p>Contains the facet results. A <code>FacetResult</code> contains the counts
     * for each attribute key that was specified in the <code>Facets</code> input
     * parameter.</p>
     */
    inline QueryResult& WithFacetResults(Aws::Vector<FacetResult>&& value) { SetFacetResults(std::move(value)); return *this;}

    /**
     * <p>Contains the facet results. A <code>FacetResult</code> contains the counts
     * for each attribute key that was specified in the <code>Facets</code> input
     * parameter.</p>
     */
    inline QueryResult& AddFacetResults(const FacetResult& value) { m_facetResults.push_back(value); return *this; }

    /**
     * <p>Contains the facet results. A <code>FacetResult</code> contains the counts
     * for each attribute key that was specified in the <code>Facets</code> input
     * parameter.</p>
     */
    inline QueryResult& AddFacetResults(FacetResult&& value) { m_facetResults.push_back(std::move(value)); return *this; }


    /**
     * <p>The number of items returned by the search. Use this to determine when you
     * have requested the last set of results.</p>
     */
    inline int GetTotalNumberOfResults() const{ return m_totalNumberOfResults; }

    /**
     * <p>The number of items returned by the search. Use this to determine when you
     * have requested the last set of results.</p>
     */
    inline void SetTotalNumberOfResults(int value) { m_totalNumberOfResults = value; }

    /**
     * <p>The number of items returned by the search. Use this to determine when you
     * have requested the last set of results.</p>
     */
    inline QueryResult& WithTotalNumberOfResults(int value) { SetTotalNumberOfResults(value); return *this;}

  private:

    Aws::String m_queryId;

    Aws::Vector<QueryResultItem> m_resultItems;

    Aws::Vector<FacetResult> m_facetResults;

    int m_totalNumberOfResults;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
