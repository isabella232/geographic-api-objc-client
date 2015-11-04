#import <Foundation/Foundation.h>
#import "SystranObject.h"

/**
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen
 * Do not edit the class manually.
 */

#import "SystranPhoto.h"
#import "SystranVideo.h"


@protocol SystranDestination
@end

@interface SystranDestination : SystranObject

/* Destination Identifier 
 */
@property(nonatomic) NSString* _id;
/* Title 
 */
@property(nonatomic) NSString* title;
/* Content 
 */
@property(nonatomic) NSString* content;
/* Array of Photos [optional]
 */
@property(nonatomic) NSArray<SystranPhoto>* photos;
/* Array of Videos [optional]
 */
@property(nonatomic) NSArray<SystranVideo>* videos;

@end
