#include "bench/fib.hpp"

// RE Benchmark TU 4370 of 20000 (depth=28, stamp="default")
namespace bench_tu_4370 {
constexpr unsigned long long result = ::bench::slow_fib<28, 4370>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_4370
