//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class NSColor;

@interface MMProgressView : NSView
{
    NSColor *_backgroundColor;
    NSColor *_progressFillColor;
    unsigned long long _currentValue;
}

@property(nonatomic) unsigned long long currentValue; // @synthesize currentValue=_currentValue;
@property(retain, nonatomic) NSColor *progressFillColor; // @synthesize progressFillColor=_progressFillColor;
@property(retain, nonatomic) NSColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;

@end

