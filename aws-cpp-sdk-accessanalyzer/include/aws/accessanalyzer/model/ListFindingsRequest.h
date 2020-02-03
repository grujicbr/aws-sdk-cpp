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
#include <aws/accessanalyzer/AccessAnalyzer_EXPORTS.h>
#include <aws/accessanalyzer/AccessAnalyzerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/accessanalyzer/model/SortCriteria.h>
#include <aws/accessanalyzer/model/Criterion.h>
#include <utility>

namespace Aws
{
namespace AccessAnalyzer
{
namespace Model
{

  /**
   * <p>Retrieves a list of findings generated by the specified
   * analyzer.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/ListFindingsRequest">AWS
   * API Reference</a></p>
   */
  class AWS_ACCESSANALYZER_API ListFindingsRequest : public AccessAnalyzerRequest
  {
  public:
    ListFindingsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListFindings"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The ARN of the analyzer to retrieve findings from.</p>
     */
    inline const Aws::String& GetAnalyzerArn() const{ return m_analyzerArn; }

    /**
     * <p>The ARN of the analyzer to retrieve findings from.</p>
     */
    inline bool AnalyzerArnHasBeenSet() const { return m_analyzerArnHasBeenSet; }

    /**
     * <p>The ARN of the analyzer to retrieve findings from.</p>
     */
    inline void SetAnalyzerArn(const Aws::String& value) { m_analyzerArnHasBeenSet = true; m_analyzerArn = value; }

    /**
     * <p>The ARN of the analyzer to retrieve findings from.</p>
     */
    inline void SetAnalyzerArn(Aws::String&& value) { m_analyzerArnHasBeenSet = true; m_analyzerArn = std::move(value); }

    /**
     * <p>The ARN of the analyzer to retrieve findings from.</p>
     */
    inline void SetAnalyzerArn(const char* value) { m_analyzerArnHasBeenSet = true; m_analyzerArn.assign(value); }

    /**
     * <p>The ARN of the analyzer to retrieve findings from.</p>
     */
    inline ListFindingsRequest& WithAnalyzerArn(const Aws::String& value) { SetAnalyzerArn(value); return *this;}

    /**
     * <p>The ARN of the analyzer to retrieve findings from.</p>
     */
    inline ListFindingsRequest& WithAnalyzerArn(Aws::String&& value) { SetAnalyzerArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the analyzer to retrieve findings from.</p>
     */
    inline ListFindingsRequest& WithAnalyzerArn(const char* value) { SetAnalyzerArn(value); return *this;}


    /**
     * <p>A filter to match for the findings to return.</p>
     */
    inline const Aws::Map<Aws::String, Criterion>& GetFilter() const{ return m_filter; }

    /**
     * <p>A filter to match for the findings to return.</p>
     */
    inline bool FilterHasBeenSet() const { return m_filterHasBeenSet; }

    /**
     * <p>A filter to match for the findings to return.</p>
     */
    inline void SetFilter(const Aws::Map<Aws::String, Criterion>& value) { m_filterHasBeenSet = true; m_filter = value; }

    /**
     * <p>A filter to match for the findings to return.</p>
     */
    inline void SetFilter(Aws::Map<Aws::String, Criterion>&& value) { m_filterHasBeenSet = true; m_filter = std::move(value); }

    /**
     * <p>A filter to match for the findings to return.</p>
     */
    inline ListFindingsRequest& WithFilter(const Aws::Map<Aws::String, Criterion>& value) { SetFilter(value); return *this;}

    /**
     * <p>A filter to match for the findings to return.</p>
     */
    inline ListFindingsRequest& WithFilter(Aws::Map<Aws::String, Criterion>&& value) { SetFilter(std::move(value)); return *this;}

    /**
     * <p>A filter to match for the findings to return.</p>
     */
    inline ListFindingsRequest& AddFilter(const Aws::String& key, const Criterion& value) { m_filterHasBeenSet = true; m_filter.emplace(key, value); return *this; }

    /**
     * <p>A filter to match for the findings to return.</p>
     */
    inline ListFindingsRequest& AddFilter(Aws::String&& key, const Criterion& value) { m_filterHasBeenSet = true; m_filter.emplace(std::move(key), value); return *this; }

    /**
     * <p>A filter to match for the findings to return.</p>
     */
    inline ListFindingsRequest& AddFilter(const Aws::String& key, Criterion&& value) { m_filterHasBeenSet = true; m_filter.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A filter to match for the findings to return.</p>
     */
    inline ListFindingsRequest& AddFilter(Aws::String&& key, Criterion&& value) { m_filterHasBeenSet = true; m_filter.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A filter to match for the findings to return.</p>
     */
    inline ListFindingsRequest& AddFilter(const char* key, Criterion&& value) { m_filterHasBeenSet = true; m_filter.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A filter to match for the findings to return.</p>
     */
    inline ListFindingsRequest& AddFilter(const char* key, const Criterion& value) { m_filterHasBeenSet = true; m_filter.emplace(key, value); return *this; }


    /**
     * <p>The maximum number of results to return in the response.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to return in the response.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to return in the response.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to return in the response.</p>
     */
    inline ListFindingsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>A token used for pagination of results returned.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token used for pagination of results returned.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>A token used for pagination of results returned.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>A token used for pagination of results returned.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>A token used for pagination of results returned.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>A token used for pagination of results returned.</p>
     */
    inline ListFindingsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token used for pagination of results returned.</p>
     */
    inline ListFindingsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token used for pagination of results returned.</p>
     */
    inline ListFindingsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The sort order for the findings returned.</p>
     */
    inline const SortCriteria& GetSort() const{ return m_sort; }

    /**
     * <p>The sort order for the findings returned.</p>
     */
    inline bool SortHasBeenSet() const { return m_sortHasBeenSet; }

    /**
     * <p>The sort order for the findings returned.</p>
     */
    inline void SetSort(const SortCriteria& value) { m_sortHasBeenSet = true; m_sort = value; }

    /**
     * <p>The sort order for the findings returned.</p>
     */
    inline void SetSort(SortCriteria&& value) { m_sortHasBeenSet = true; m_sort = std::move(value); }

    /**
     * <p>The sort order for the findings returned.</p>
     */
    inline ListFindingsRequest& WithSort(const SortCriteria& value) { SetSort(value); return *this;}

    /**
     * <p>The sort order for the findings returned.</p>
     */
    inline ListFindingsRequest& WithSort(SortCriteria&& value) { SetSort(std::move(value)); return *this;}

  private:

    Aws::String m_analyzerArn;
    bool m_analyzerArnHasBeenSet;

    Aws::Map<Aws::String, Criterion> m_filter;
    bool m_filterHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    SortCriteria m_sort;
    bool m_sortHasBeenSet;
  };

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
