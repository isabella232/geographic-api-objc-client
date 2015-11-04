#import <Foundation/Foundation.h>
#import "SystranObject.h"

/**
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen
 * Do not edit the class manually.
 */

#import "SystranReview.h"
#import "SystranDescription.h"
#import "SystranBooking.h"
#import "SystranContact.h"
#import "SystranPhoto.h"
#import "SystranOpeningHours.h"
#import "SystranFullPOILocation.h"


@protocol SystranFullPOI
@end

@interface SystranFullPOI : SystranObject

/* POI Identifier 
 */
@property(nonatomic) NSString* _id;
/* Location 
 */
@property(nonatomic) SystranFullPOILocation* location;
/* Name [optional]
 */
@property(nonatomic) NSString* name;
/* Types, ordered from general to specific 
 */
@property(nonatomic) NSArray* /* NSString */ types;
/* Rating [optional]
 */
@property(nonatomic) NSNumber* rating;
/* Price Level [optional]
 */
@property(nonatomic) NSNumber* priceLevel;
/* Contact [optional]
 */
@property(nonatomic) SystranContact* contact;
/* Open Now [optional]
 */
@property(nonatomic) NSNumber* openNow;
/* Opening Hours [optional]
 */
@property(nonatomic) NSArray<SystranOpeningHours>* openingHours;
/* Array of Photos [optional]
 */
@property(nonatomic) NSArray<SystranPhoto>* photos;
/* URL [optional]
 */
@property(nonatomic) NSString* url;
/* Description content splitted in several parts [optional]
 */
@property(nonatomic) NSArray<SystranDescription>* descriptions;
/* Reviews [optional]
 */
@property(nonatomic) NSArray<SystranReview>* reviews;
/* Booking [optional]
 */
@property(nonatomic) SystranBooking* booking;

@end
