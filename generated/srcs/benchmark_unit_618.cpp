#include "bench/fib.hpp"

// RE Benchmark TU 618 of 20000 (depth=28, stamp="default")
namespace bench_tu_618 {
constexpr unsigned long long result = ::bench::slow_fib<28, 618>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_618
