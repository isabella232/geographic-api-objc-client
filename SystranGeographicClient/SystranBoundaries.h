#import <Foundation/Foundation.h>
#import "SystranObject.h"

/**
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen
 * Do not edit the class manually.
 */



@protocol SystranBoundaries
@end

@interface SystranBoundaries : SystranObject

/* Coordinates defined by latitude and longitude [optional]
 */
@property(nonatomic) NSArray* /* NSNumber */ coordinates;
/* The type of coordinates [optional]
 */
@property(nonatomic) NSString* type;

@end
