#include "bench/fib.hpp"

// RE Benchmark TU 19873 of 20000 (depth=28, stamp="default")
namespace bench_tu_19873 {
constexpr unsigned long long result = ::bench::slow_fib<28, 19873>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_19873
