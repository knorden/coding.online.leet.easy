#include "_Test.hpp"

bool TestWrapper() {
  /* VARIABLE FOR UNIT TESTS: test-id, test-name, pass/fail-check */
  static Test thisTest;
  static bool allPassed = true;

  /*******************************************************************************/
  thisTest.Name = "INIT OUTPUT";
  TestHeader(thisTest);
  /*******************************************************************************/
  /* TEST_BODY STARTS BELOW */
  allPassed = []() {
    std::string tString = "THIS IS A TEST STRING.";
    std::cout << tString;
    return true;
  }();
  errCatch(allPassed, thisTest);

  /*******************************************************************************/
  thisTest.Name = " ";
  TestHeader(thisTest);
  /*******************************************************************************/
  /* TEST_BODY STARTS BELOW */
  // std::vector<int> exvec_1{2, 7, 11, 15};
  // int target1 = 9;
  // std::vector<int> result = twoSum(exvec_1, target1);
  std::vector<int> result;
  // std::vector<int> ex02 = {
  //     572, 815, 387, 418, 434, 530, 376, 190, 196, 74,  830, 561, 973, 771,
  //     640, 37,  539, 369, 327, 51,  623, 575, 988, 44,  659, 48,  22,  776,
  //     487, 873, 486, 169, 499, 82,  128, 31,  386, 691, 553, 848, 968, 874,
  //     692, 404, 463, 285, 745, 631, 304, 271, 40,  921, 733, 56,  883, 517,
  //     99,  580, 55,  81, 232, 971, 561, 683, 806, 994, 823, 219, 315, 564,
  //     997, 976, 158, 208, 851, 206, 101, 989, 542, 985, 940, 116, 153, 47,
  //     806, 944, 337, 903, 712, 138, 236, 777, 630, 912, 22,  140, 525, 270,
  //     997, 763, 812, 597, 806, 423, 869, 926, 344, 494, 858, 519, 389, 627,
  //     517, 964, 74,  432, 730, 843, 673, 985, 819, 397, 607, 34,  948, 648,
  //     43,  212, 950, 235, 995, 76,  439, 614, 203, 313, 180, 760, 210, 813,
  //     920, 229, 615, 730, 359, 863, 678, 43,  293, 978, 305, 106, 797, 769,
  //     3,   700, 945, 135, 430, 965, 762, 479, 152, 121, 935, 809, 101, 271,
  //     428, 608, 8,   983, 758, 662, 755, 190, 632, 792, 789, 174, 869, 622,
  //     885, 626, 310, 128, 233, 82,  223, 339, 771, 741, 227, 131, 85, 51,
  //     361, 343, 641, 568, 922, 145, 256, 177, 329, 959, 991, 293, 850, 858,
  //     76,  291, 134, 254, 956, 971, 718, 391, 336, 899, 206, 642, 254, 851,
  //     274, 239, 538, 418, 21,  232, 706, 275, 615, 568, 714, 234, 567, 994,
  //     368, 54, 744, 498, 380, 594, 415, 286, 260, 582, 522, 795, 261, 437,
  //     292, 887, 405, 293, 946, 678, 686, 682, 501, 238, 245, 380, 218, 591};
  // int target02 = 101;

  // result = twoSum(ex02, target02);

  // vector<int> ex03 = {-3, 4, 3, 90};
  // int target3 = 0;
  // result = twoSum(ex03, target3);

  vector<int> ex04 = {-1, -2, -3, -4, -5};
  int target4 = -8;
  result = twoSum(ex04, target4);

  return allPassed;
}