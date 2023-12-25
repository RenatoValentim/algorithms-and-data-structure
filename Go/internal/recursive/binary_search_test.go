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
}
