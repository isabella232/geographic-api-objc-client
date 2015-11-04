#import <Foundation/Foundation.h>
#import "SystranObject.h"

/**
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen
 * Do not edit the class manually.
 */

#import "SystranDestination.h"
#import "SystranErrorResponse.h"


@protocol SystranDestinationResponse
@end

@interface SystranDestinationResponse : SystranObject

/* Error at request level [optional]
 */
@property(nonatomic) SystranErrorResponse* error;
/* Total number of elements matching the criteria (for pagination) 
 */
@property(nonatomic) NSNumber* total;
/* Pagination offset 
 */
@property(nonatomic) NSNumber* offset;
/* Array of destinations 
 */
@property(nonatomic) NSArray<SystranDestination>* destinations;

@end