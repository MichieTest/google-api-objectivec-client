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
//  GTLCalendarEvent.h
//

// ----------------------------------------------------------------------------
// NOTE: This file is generated from Google APIs Discovery Service.
// Service:
//   Calendar API (calendar/v3)
// Description:
//   Lets you manipulate events and other calendar data.
// Documentation:
//   https://code.google.com/apis/calendar/v3/using.html
// Classes:
//   GTLCalendarEvent (0 custom class methods, 32 custom properties)
//   GTLCalendarEventAttendees (0 custom class methods, 0 custom properties)
//   GTLCalendarEventCreator (0 custom class methods, 2 custom properties)
//   GTLCalendarEventExtendedProperties (0 custom class methods, 2 custom properties)
//   GTLCalendarEventGadget (0 custom class methods, 8 custom properties)
//   GTLCalendarEventOrganizer (0 custom class methods, 2 custom properties)
//   GTLCalendarEventReminders (0 custom class methods, 2 custom properties)
//   GTLCalendarEventExtendedPropertiesPrivate (0 custom class methods, 0 custom properties)
//   GTLCalendarEventExtendedPropertiesShared (0 custom class methods, 0 custom properties)
//   GTLCalendarEventGadgetPreferences (0 custom class methods, 0 custom properties)

#if GTL_BUILT_AS_FRAMEWORK
  #import "GTL/GTLObject.h"
#else
  #import "GTLObject.h"
#endif

@class GTLCalendarEventAttendee;
@class GTLCalendarEventAttendees;
@class GTLCalendarEventCreator;
@class GTLCalendarEventDateTime;
@class GTLCalendarEventExtendedProperties;
@class GTLCalendarEventExtendedPropertiesPrivate;
@class GTLCalendarEventExtendedPropertiesShared;
@class GTLCalendarEventGadget;
@class GTLCalendarEventGadgetPreferences;
@class GTLCalendarEventOrganizer;
@class GTLCalendarEventReminder;
@class GTLCalendarEventReminders;

// ----------------------------------------------------------------------------
//
//   GTLCalendarEvent
//

@interface GTLCalendarEvent : GTLObject

// Whether anyone can invite themselves to the event. Optional. The default is
// False.
@property (retain) NSNumber *anyoneCanAddSelf;  // boolValue

// The attendees of the event, as a map with the attendees' email addresses as
// keys.
@property (retain) GTLCalendarEventAttendees *attendees;

// Whether attendees have been omitted from the event's representation. When
// retrieving an event, this is due to a restriction specified by the
// 'maxAttendee' query parameter. When updating an event, this can be used to
// only update the participant's response. Optional. The default is False.
@property (retain) NSNumber *attendeesOmitted;  // boolValue

// The color of the event (overrides the calendar's default color). Optional.
@property (retain) NSString *color;

// Creation time of the event (as a RFC 3339 timestamp). Read-only.
@property (retain) GTLDateTime *created;

// The creator of the event. Read-only.
@property (retain) GTLCalendarEventCreator *creator;

// Description of the event. Optional.
// Remapped to 'descriptionProperty' to avoid NSObject's 'description'.
@property (retain) NSString *descriptionProperty;

// The end time of the event. For a recurring event, this is the end time of the
// first instance.
@property (retain) GTLCalendarEventDateTime *end;

// ETag of the resource.
@property (retain) NSString *ETag;

// Extended properties of the event.
@property (retain) GTLCalendarEventExtendedProperties *extendedProperties;

// A gadget that extends this event.
@property (retain) GTLCalendarEventGadget *gadget;

// Whether attendees other than the organizer can invite others to the event.
// Optional. The default is False.
@property (retain) NSNumber *guestsCanInviteOthers;  // boolValue

// Whether attendees other than the organizer can modify the event. Optional.
// The default is False.
@property (retain) NSNumber *guestsCanModify;  // boolValue

// Whether attendees other than the organizer can see who the event's attendees
// are. Optional. The default is False.
@property (retain) NSNumber *guestsCanSeeOtherGuests;  // boolValue

// An absolute link to this event in the Google Calendar Web UI. Read-only.
@property (retain) NSString *htmlLink;

// Event ID in the iCalendar format.
@property (retain) NSString *iCalUID;

// Identifier of the event.
// identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
@property (retain) NSString *identifier;

// Type of the resource ("calendar#event").
@property (retain) NSString *kind;

// Geographic location of the event as free-form text. Optional.
@property (retain) NSString *location;

// The organizer of the event. If the organizer is also an attendee, this is
// indicated with a separate entry in 'attendees'. Read-only.
@property (retain) GTLCalendarEventOrganizer *organizer;

// For an instance of a recurring event, this is the time at which this event
// would start according to the recurrence data in the recurring event
// identified by recurringEventId. Immutable.
@property (retain) GTLCalendarEventDateTime *originalStartTime;

// Whether this is a private event copy where changes are not shared with other
// copies on other calendars. Optional. Immutable.
@property (retain) NSNumber *privateCopy;  // boolValue

// List of RRULE, EXRULE, RDATE and EXDATE lines for a recurring event. This
// field is omitted for single events or instances of recurring events.
@property (retain) NSArray *recurrence;  // of NSString

// For an instance of a recurring event, this is the event ID of the recurring
// event itself. Immutable.
@property (retain) NSString *recurringEventId;

// Information about the event's reminders for the authenticated user.
@property (retain) GTLCalendarEventReminders *reminders;

// Sequence number as per iCalendar.
@property (retain) NSNumber *sequence;  // intValue

// The start time of the event. For a recurring event, this is the start time of
// the first instance.
@property (retain) GTLCalendarEventDateTime *start;

// Status of the event. A deleted event is represented with the status
// 'cancelled'. Optional. The default is 'confirmed'.
@property (retain) NSString *status;

// Title of the event.
@property (retain) NSString *summary;

// Whether the event blocks time on the calendar. Optional. The default is
// 'opaque'.
@property (retain) NSString *transparency;

// Last modification time of the event (as a RFC 3339 timestamp). Read-only.
@property (retain) GTLDateTime *updated;

// Visibility of the event. Optional. The default is 'default'.
@property (retain) NSString *visibility;

@end


// ----------------------------------------------------------------------------
//
//   GTLCalendarEventAttendees
//

@interface GTLCalendarEventAttendees : GTLObject
// This object is documented as having more properties that are
// GTLCalendarEventAttendee. Use -additionalJSONKeys and
// -additionalPropertyForName: to get the list of properties and then fetch
// them; or -additionalProperties to fetch them all at once.
@end


// ----------------------------------------------------------------------------
//
//   GTLCalendarEventCreator
//

@interface GTLCalendarEventCreator : GTLObject

// The creator's name, if available.
@property (retain) NSString *displayName;

// The creator's email address.
@property (retain) NSString *email;

@end


// ----------------------------------------------------------------------------
//
//   GTLCalendarEventExtendedProperties
//

@interface GTLCalendarEventExtendedProperties : GTLObject

// Properties that are private to the copy of the event that appears on this
// calendar.
@property (retain) GTLCalendarEventExtendedPropertiesPrivate *private;

// Properties that are shared between copies of the event on other attendees'
// calendars.
@property (retain) GTLCalendarEventExtendedPropertiesShared *shared;

@end


// ----------------------------------------------------------------------------
//
//   GTLCalendarEventGadget
//

@interface GTLCalendarEventGadget : GTLObject

// The gadget's display mode. Optional.
@property (retain) NSString *display;

// The gadget's height in pixels. Optional.
@property (retain) NSNumber *height;  // intValue

// The gadget's icon URL.
@property (retain) NSString *iconLink;

// The gadget's URL.
@property (retain) NSString *link;

// Preferences.
@property (retain) GTLCalendarEventGadgetPreferences *preferences;

// The gadget's title.
@property (retain) NSString *title;

// The gadget's type.
@property (retain) NSString *type;

// The gadget's width in pixels. Optional.
@property (retain) NSNumber *width;  // intValue

@end


// ----------------------------------------------------------------------------
//
//   GTLCalendarEventOrganizer
//

@interface GTLCalendarEventOrganizer : GTLObject

// The organizer's name, if available.
@property (retain) NSString *displayName;

// The organizer's email address.
@property (retain) NSString *email;

@end


// ----------------------------------------------------------------------------
//
//   GTLCalendarEventReminders
//

@interface GTLCalendarEventReminders : GTLObject

// If the event doesn't use the default reminders, this lists the reminders
// specific to the event, or, if not set, indicates that no reminders are set
// for this event.
@property (retain) NSArray *overrides;  // of GTLCalendarEventReminder

// Whether the default reminders of the calendar apply to the event.
@property (retain) NSNumber *useDefault;  // boolValue

@end


// ----------------------------------------------------------------------------
//
//   GTLCalendarEventExtendedPropertiesPrivate
//

@interface GTLCalendarEventExtendedPropertiesPrivate : GTLObject
// This object is documented as having more properties that are NSString. Use
// -additionalJSONKeys and -additionalPropertyForName: to get the list of
// properties and then fetch them; or -additionalProperties to fetch them all at
// once.
@end


// ----------------------------------------------------------------------------
//
//   GTLCalendarEventExtendedPropertiesShared
//

@interface GTLCalendarEventExtendedPropertiesShared : GTLObject
// This object is documented as having more properties that are NSString. Use
// -additionalJSONKeys and -additionalPropertyForName: to get the list of
// properties and then fetch them; or -additionalProperties to fetch them all at
// once.
@end


// ----------------------------------------------------------------------------
//
//   GTLCalendarEventGadgetPreferences
//

@interface GTLCalendarEventGadgetPreferences : GTLObject
// This object is documented as having more properties that are NSString. Use
// -additionalJSONKeys and -additionalPropertyForName: to get the list of
// properties and then fetch them; or -additionalProperties to fetch them all at
// once.
@end