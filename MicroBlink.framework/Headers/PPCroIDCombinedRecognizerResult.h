//
//  PPCroIDCombinedRecognizerResult.h
//  BlinkIdFramework
//
//  Created by Jura on 04/12/2016.
//  Copyright © 2016 MicroBlink Ltd. All rights reserved.
//

#import "PPRecognizerResult.h"

/**
 * Result of scanning with Croatian ID Combined recognizer
 */
PP_CLASS_AVAILABLE_IOS(6.0)
@interface PPCroIDCombinedRecognizerResult : PPRecognizerResult

/**
 * The first name of the Croatian ID owner.
 */
@property (nonatomic, readonly, nullable) NSString *firstName;

/**
 * The last name of the Croatian ID owner.
 */
@property (nonatomic, readonly, nullable) NSString *lastName;

/**
 * The identity card number of Croatian ID.
 */
@property (nonatomic, readonly, nullable) NSString *identityCardNumber;

/**
 * The sex of the Croatian ID owner.
 */
@property (nonatomic, readonly, nullable) NSString *sex;

/**
 * The nationality of the Croatian ID owner.
 */
@property (nonatomic, readonly, nullable) NSString *nationality;

/**
 * The date of birth of Croatian ID owner
 */
@property (nonatomic, readonly, nullable) NSDate *dateOfBirth;

/**
 * The document date of expiry of the Croatian ID
 */
@property (nonatomic, readonly, nullable) NSDate *documentDateOfExpiry;

/**
 * Check if date of expiry is permanent on the Croatian ID.
 */
@property (nonatomic, readonly) BOOL isDocumentDateOfExpiryPermanent;

/**
 * The address of the Croatian ID owner.
 */
@property (nonatomic, readonly, nullable) NSString *address;

/**
 * The issuing authority of Croatian ID.
 */
@property (nonatomic, readonly, nullable) NSString *issuingAuthority;

/**
 * The document date of issue of the Croatian ID.
 */
@property (nonatomic, readonly, nullable) NSDate *documentDateOfIssue;

/**
 * The OIB (PIN) of the Croatian ID owner.
 */
@property (nonatomic, readonly, nullable) NSString *oib;

/**
 * YES if all check digits inside MRZ are correct, NO otherwise.
 * More specifically, YES if MRZ complies with ICAO Document 9303 standard, NO otherwise.
 */
@property (nonatomic, readonly) BOOL mrtdVerified;

/**
 * YES if Data from the front side is matching the data from the back side
 */
@property (nonatomic, readonly) BOOL matchingData;

/**
 * YES if the person is non Croatian resident
 */
@property (nonatomic, readonly) BOOL nonResident;

/**
 * YES if the document is bilingual
 */
@property (nonatomic, readonly) BOOL documentBilingual;

/**
 * Contains signature which confirms that this data originates from the SDK
 */
@property (nonatomic, readonly, nullable) NSData *signature;

/**
 * Contains the version of the signature
 */
@property (nonatomic, readonly, nullable) NSString *signatureVersion;

/**
 * Byte buffer with face image
 */
@property (nonatomic, readonly, nullable) NSData *faceImage;

@end
