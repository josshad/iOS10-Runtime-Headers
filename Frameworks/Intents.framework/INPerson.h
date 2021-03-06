/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INPerson : NSObject <INCacheableContainer, INPersonExport, INSpeakable, NSCopying, NSSecureCoding> {
    NSArray * _aliases;
    NSString * _contactIdentifier;
    NSString * _customIdentifier;
    NSString * _displayName;
    INImage * _image;
    NSPersonNameComponents * _nameComponents;
    INPersonHandle * _personHandle;
    long long  _suggestionType;
    NSString * _userInput;
}

@property (nonatomic, readonly, copy) NSArray *aliases;
@property (nonatomic, readonly, copy) NSString *contactIdentifier;
@property (nonatomic, readonly, copy) NSString *customIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *displayName;
@property (nonatomic, readonly, copy) NSString *firstName;
@property (nonatomic, readonly, copy) NSString *fullName;
@property (nonatomic, readonly, copy) NSString *handle;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly, copy) INImage *image;
@property (nonatomic, readonly, copy) NSString *lastName;
@property (nonatomic, readonly, copy) NSPersonNameComponents *nameComponents;
@property (nonatomic, readonly, copy) INPersonHandle *personHandle;
@property (nonatomic, readonly) NSString *pronunciationHint;
@property (nonatomic, readonly) NSString *spokenPhrase;
@property (nonatomic, readonly) long long suggestionType;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *userIdentifier;
@property (nonatomic, readonly, copy) NSString *userName;
@property (nonatomic, readonly, copy) NSString *userURIString;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_aliases;
- (id)_displayName;
- (id)_initWithUserInput:(id)arg1 handle:(id)arg2 nameComponents:(id)arg3 displayName:(id)arg4 image:(id)arg5 contactIdentifier:(id)arg6;
- (id)_initWithUserInput:(id)arg1 personHandle:(id)arg2 nameComponents:(id)arg3 displayName:(id)arg4 image:(id)arg5 contactIdentifier:(id)arg6 customIdentifier:(id)arg7 aliases:(id)arg8 suggestionType:(long long)arg9;
- (id)_userInput;
- (id)aliases;
- (id)cacheableObjects;
- (id)contactIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)customIdentifier;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (id)firstName;
- (id)fullName;
- (id)handle;
- (unsigned long long)hash;
- (id)identifier;
- (id)image;
- (id)initWithCoder:(id)arg1;
- (id)initWithHandle:(id)arg1 displayName:(id)arg2 contactIdentifier:(id)arg3;
- (id)initWithHandle:(id)arg1 nameComponents:(id)arg2 contactIdentifier:(id)arg3;
- (id)initWithHandle:(id)arg1 nameComponents:(id)arg2 displayName:(id)arg3 image:(id)arg4 contactIdentifier:(id)arg5;
- (id)initWithPersonHandle:(id)arg1 nameComponents:(id)arg2 displayName:(id)arg3 image:(id)arg4 contactIdentifier:(id)arg5 customIdentifier:(id)arg6;
- (id)initWithPersonHandle:(id)arg1 nameComponents:(id)arg2 displayName:(id)arg3 image:(id)arg4 contactIdentifier:(id)arg5 customIdentifier:(id)arg6 aliases:(id)arg7 suggestionType:(long long)arg8;
- (bool)isEqual:(id)arg1;
- (id)lastName;
- (id)nameComponents;
- (id)personHandle;
- (id)pronunciationHint;
- (id)spokenPhrase;
- (long long)suggestionType;
- (id)userIdentifier;
- (id)userName;
- (id)userURIString;

@end
