/* Copyright (c) 2016 Google Inc.
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
//  GTLYouTubeSubscriptionSubscriberSnippet.h
//

// ----------------------------------------------------------------------------
// NOTE: This file is generated from Google APIs Discovery Service.
// Service:
//   YouTube Data API (youtube/v3)
// Description:
//   Supports core YouTube features, such as uploading videos, creating and
//   managing playlists, searching for content, and much more.
// Documentation:
//   https://developers.google.com/youtube/v3
// Classes:
//   GTLYouTubeSubscriptionSubscriberSnippet (0 custom class methods, 4 custom properties)

#if GTL_BUILT_AS_FRAMEWORK
  #import "GTL/GTLObject.h"
#else
  #import "GTLObject.h"
#endif

@class GTLYouTubeThumbnailDetails;

// ----------------------------------------------------------------------------
//
//   GTLYouTubeSubscriptionSubscriberSnippet
//

// Basic details about a subscription's subscriber including title, description,
// channel ID and thumbnails.

@interface GTLYouTubeSubscriptionSubscriberSnippet : GTLObject

// The channel ID of the subscriber.
@property (nonatomic, copy) NSString *channelId;

// The description of the subscriber.
// Remapped to 'descriptionProperty' to avoid NSObject's 'description'.
@property (nonatomic, copy) NSString *descriptionProperty;

// Thumbnails for this subscriber.
@property (nonatomic, retain) GTLYouTubeThumbnailDetails *thumbnails;

// The title of the subscriber.
@property (nonatomic, copy) NSString *title;

@end
