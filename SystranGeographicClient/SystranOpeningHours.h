#import <Foundation/Foundation.h>
#import "SystranObject.h"

/**
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen
 * Do not edit the class manually.
 */



@protocol SystranOpeningHours
@end

@interface SystranOpeningHours : SystranObject

/* Opening hour (day(1 digit),hour(2 digits), minutes(2digits)), ex: 50928 for Friday 9h28 
 */
@property(nonatomic) NSNumber* begin;
/* Closing hour (day(1 digit),hour(2 digits), minutes(2digits)), ex: 51722 for Friday 17h22 
 */
@property(nonatomic) NSNumber* end;

@end
