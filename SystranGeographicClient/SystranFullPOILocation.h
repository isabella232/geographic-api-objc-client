#import <Foundation/Foundation.h>
#import "SystranObject.h"

/**
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen
 * Do not edit the class manually.
 */

#import "SystranPOIAddress.h"
#import "SystranFullPosition.h"


@protocol SystranFullPOILocation
@end

@interface SystranFullPOILocation : SystranObject

/* Position defined by coordinates and type 
 */
@property(nonatomic) SystranFullPosition* position;
/* Address [optional]
 */
@property(nonatomic) SystranPOIAddress* address;

@end
