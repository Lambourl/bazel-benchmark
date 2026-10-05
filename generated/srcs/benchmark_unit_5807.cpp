#include "bench/fib.hpp"

// RE Benchmark TU 5807 of 20000 (depth=28, stamp="default")
namespace bench_tu_5807 {
constexpr unsigned long long result = ::bench::slow_fib<28, 5807>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_5807
