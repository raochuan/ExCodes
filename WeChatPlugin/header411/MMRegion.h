//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface MMRegion : NSObject
{
    int _type;
    int _numbersOfChildren;
    NSString *_code;
    NSString *_name;
    NSString *_parentCode;
}

@property(nonatomic) int numbersOfChildren; // @synthesize numbersOfChildren=_numbersOfChildren;
@property(nonatomic) int type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *parentCode; // @synthesize parentCode=_parentCode;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *code; // @synthesize code=_code;
- (void).cxx_destruct;
- (id)description;

@end

