//
//  CMHighlighter.h
//  Snippet
//
//  Created by Krystof Vasa on 4/28/09.
//  Copyright 2009 Krystof Vasa and FuelCollective. All rights reserved.
//

#import <Cocoa/Cocoa.h>

#define CMHighlightedTextViewKey @"CMHighlightedTextViewKey"
#define CMHighlightedRangeKey @"CMHighlightedRangeKey"

#define CMHighlighter NSObject

@interface NSObject (CMHighlighter)

+(NSDictionary*)stringAttributes;            //Used for "strings"
+(NSDictionary*)cStringAttributes;           //Used for 'strings'
+(NSDictionary*)keywordAttributes;         //Used for keywords
+(NSDictionary*)commentAttributes;        //Used for comments
+(NSDictionary*)macroAttributes;              //Used for different things like macros in C
+(NSDictionary*)foreignLanguageAttributes;  //Used for foreign languages like PHP in HTML

+(NSArray*)availableLanguages;
+(NSArray*)enabledLanguages;
+(NSArray*)builtInLanguages;

+(Class)classForLanguage:(NSString*)languageName;

+(void)highlight:(NSDictionary*)aDict;
@end
