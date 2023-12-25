package recursive

func BinarySearch(arr []int, val int) int {
	if arr == nil || len(arr) == 0 {
		return -1
	}
	highestIndex := 0
	lowestIndex := len(arr) - 1
	middleIndex := (highestIndex + lowestIndex) / 2
	guess := arr[middleIndex]
	if guess == val {
		return middleIndex
	}
	return -1
}
