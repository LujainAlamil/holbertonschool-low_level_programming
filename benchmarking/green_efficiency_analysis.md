# Green Efficiency Analysis

## Measurement Methodology

In this project, we used the `clock()` function from the C `time.h` library to measure CPU time. For each timed section, we recorded the value of `clock()` before the operation started and again after it finished. We calculated the elapsed CPU time by subtracting the start value from the end value and dividing the result by `CLOCKS_PER_SEC`. This converts clock ticks into seconds.

In the first program, we measured the time required to run a loop for 100,000,000 iterations. In the second program, we measured the execution time of two algorithms that count even numbers in an array of 50,000 elements: the naive algorithm and the single-pass algorithm. In the third program, we measured three separate stages: building the dataset, processing it, and calculating the checksum. We also added the three stage times to obtain the total measured time.

## Observed Performance Differences

The first program took 0.226016, 0.226798, and 0.226385 seconds in its three recorded runs. These results are close to one another, with all three measurements being about 0.226 seconds.

The second program showed a large difference between its two algorithms. The naive algorithm took 2.013202, 1.963303, and 1.644343 seconds. The single-pass algorithm took 0.000101, 0.000100, and 0.000101 seconds. In every recorded run, the single-pass algorithm was much faster than the naive algorithm. Both algorithms returned their recorded results: 625025000 for the naive algorithm and 25000 for the single-pass algorithm. These results are different, so the timings alone do not establish that the algorithms performed an identical calculation.

In the third program, the total measured time was 0.000749 seconds. Building the dataset took 0.000294 seconds, processing took 0.000320 seconds, and reducing the data took 0.000135 seconds. Processing was the longest of these three measured stages.

## Relation Between Runtime and Energy Consumption

The recorded outputs provide execution-time measurements, but they do not include direct measurements of energy consumption. Therefore, this experiment does not prove that the program with the longer runtime consumed more energy, or that the faster program consumed less energy. Runtime and energy consumption are related performance considerations, but a conclusion about energy requires an energy measurement as well.

## Limitations of the Experiment

One limitation is that the experiment measured CPU time using `clock()` rather than measuring energy directly. Another limitation is that the recorded execution times varied between runs. For example, the naive algorithm took between 1.644343 and 2.013202 seconds in the three recorded runs. The results also come from the specific programs, input sizes, and execution environment used in this experiment. In addition, the single-pass and naive algorithms returned different results, so their outputs should be checked before treating them as equivalent solutions. The very short times in the third program are also reported only to six decimal places, which limits how much detail can be seen in those measurements.

## Practical Engineering Takeaway

This experiment shows why it is useful to measure program performance instead of judging it by appearance. In the second program, the single-pass version had a much shorter recorded runtime than the naive version. However, programmers should first confirm that compared algorithms produce the correct and equivalent results. Engineers should also measure energy directly before claiming that a runtime improvement reduces energy consumption. Choosing an efficient algorithm, checking its output, and measuring the relevant resource are all important parts of evaluating software.
