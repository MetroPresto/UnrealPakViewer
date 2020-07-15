#pragma once

#include "CoreMinimal.h"
#include "Widgets/SCompoundWidget.h"

/** Implements the Pak Info window. */
class SPakDetailView : public SCompoundWidget
{
public:
	/** Default constructor. */
	SPakDetailView();

	/** Virtual destructor. */
	virtual ~SPakDetailView();

	SLATE_BEGIN_ARGS(SPakDetailView) {}
	SLATE_END_ARGS()

	/** Constructs this widget. */
	void Construct(const FArguments& InArgs);

protected:
	FORCEINLINE FText GetPakPath() const;
	FORCEINLINE FText GetPakMountPoint() const;
	FORCEINLINE FText GetPakVersion() const;
	FORCEINLINE FText GetPakFileSize() const;
	FORCEINLINE FText GetPakFileSizeToolTip() const;
	FORCEINLINE FText GetPakFileCount() const;
	FORCEINLINE FText GetPakHeaderSize() const;
	FORCEINLINE FText GetPakHeaderSizeToolTip() const;
	FORCEINLINE FText GetPakIndexSize() const;
	FORCEINLINE FText GetPakIndexSizeToolTip() const;
	FORCEINLINE FText GetPakFileIndexHash() const;
	FORCEINLINE FText GetPakFileIndexIsEncrypted() const;
	FORCEINLINE FText GetPakFileContentSize() const;
	FORCEINLINE FText GetPakFileContentSizeToolTip() const;
	FORCEINLINE FText GetPakFileEncryptionMethods() const;
};
