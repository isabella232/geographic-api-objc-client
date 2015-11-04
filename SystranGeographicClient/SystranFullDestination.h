#import <Foundation/Foundation.h>
#import "SystranObject.h"

/**
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen
 * Do not edit the class manually.
 */

#import "SystranFullLocation.h"
#import "SystranPhoto.h"
#import "SystranVideo.h"
#import "SystranChapter.h"


@protocol SystranFullDestination
@end

@interface SystranFullDestination : SystranObject

/* Destination Identifier 
 */
@property(nonatomic) NSString* _id;
/* Location 
 */
@property(nonatomic) SystranFullLocation* location;
/* Title 
 */
@property(nonatomic) NSString* title;
/* Headline 
 */
@property(nonatomic) NSString* headline;
/* Introduction 
 */
@property(nonatomic) NSString* introduction;
/* Advice [optional]
 */
@property(nonatomic) NSString* advice;
/* Chapters 
 */
@property(nonatomic) NSArray<SystranChapter>* chapters;
/* Array of Photos [optional]
 */
@property(nonatomic) NSArray<SystranPhoto>* photos;
/* Array of Videos [optional]
 */
@property(nonatomic) NSArray<SystranVideo>* videos;

@end
