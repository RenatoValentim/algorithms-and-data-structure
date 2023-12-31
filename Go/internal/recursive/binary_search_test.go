package recursive_test

import (
	"algorithms_data_structures/internal/recursive"
	"testing"

	"github.com/stretchr/testify/assert"
)

func TestBinarySearch(t *testing.T) {
	assert := assert.New(t)
	t.Run(`Should return a negative index if arr is nil`, func(t *testing.T) {
		output := recursive.BinarySearch(nil, 3)

		assert.Equal(-1, output)
	})

	t.Run(`Should return a negative index if arr is empty`, func(t *testing.T) {
		arr := []int{}

		output := recursive.BinarySearch(arr, 3)

		assert.Equal(-1, output)
	})

	t.Run(`Should return a negative index if the value not in arr`, func(t *testing.T) {
		arr := []int{1, 2, 3}

		output := recursive.BinarySearch(arr, 5)

		assert.Equal(-1, output)
	})

	t.Run(`Should return the index for the searched value when the guess is equals for the value`, func(t *testing.T) {
		arr := []int{1, 2, 3, 4, 5}

		output := recursive.BinarySearch(arr, 3)

		assert.Equal(2, output)
	})

	t.Run(`Should return the index for the searched value when the value is in the arr but less than the guess`, func(t *testing.T) {
		arr := []int{1, 2, 3, 4, 5}

		output := recursive.BinarySearch(arr, 1)

		assert.Equal(0, output)
	})

	t.Run(`Should return the index for the searched value when the value is in the arr but is greater than the guess`, func(t *testing.T) {
		arr := []int{1, 2, 3, 4, 5}

		output := recursive.BinarySearch(arr, 5)

		assert.Equal(4, output)
	})
}
