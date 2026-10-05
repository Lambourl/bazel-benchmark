#include "bench/fib.hpp"

// RE Benchmark TU 1039 of 20000 (depth=28, stamp="default")
namespace bench_tu_1039 {
constexpr unsigned long long result = ::bench::slow_fib<28, 1039>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_1039
