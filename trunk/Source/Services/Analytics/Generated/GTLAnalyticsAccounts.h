/* Copyright (c) 2011 Google Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

//
//  GTLAnalyticsAccounts.h
//

// ----------------------------------------------------------------------------
// NOTE: This file is generated from Google APIs Discovery Service.
// Service:
//   Google Analytics API (analytics/v3)
// Description:
//   View and manage your Google Analytics data
// Documentation:
//   http://code.google.com/apis/analytics
// Classes:
//   GTLAnalyticsAccounts (0 custom class methods, 8 custom properties)

#if GTL_BUILT_AS_FRAMEWORK
  #import "GTL/GTLObject.h"
#else
  #import "GTLObject.h"
#endif

@class GTLAnalyticsAccount;

// ----------------------------------------------------------------------------
//
//   GTLAnalyticsAccounts
//

// This class supports NSFastEnumeration over its "items" property. It also
// supports -itemAtIndex: to retrieve individual objects from "items".

@interface GTLAnalyticsAccounts : GTLCollectionObject

// A list of accounts.
@property (retain) NSArray *items;  // of GTLAnalyticsAccount

// The maximum number of entries the response can contain, regardless of the
// actual number of entries returned. Its value ranges from 1 to 10,000 with a
// value of 1000 by default, or otherwise specified by the max-results query
// parameter.
@property (retain) NSNumber *itemsPerPage;  // intValue

// Collection type.
@property (retain) NSString *kind;

// Next link for this account collection.
@property (retain) NSString *nextLink;

// Previous link for this account collection.
@property (retain) NSString *previousLink;

// The starting index of the entries, which is 1 by default or otherwise
// specified by the start-index query parameter.
@property (retain) NSNumber *startIndex;  // intValue

// The total number of results for the query, regardless of the number of
// results in the response.
@property (retain) NSNumber *totalResults;  // intValue

// Email ID of the authenticated user
@property (retain) NSString *username;

@end
