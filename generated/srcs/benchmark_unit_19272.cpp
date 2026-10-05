#include "bench/fib.hpp"

// RE Benchmark TU 19272 of 20000 (depth=28, stamp="default")
namespace bench_tu_19272 {
constexpr unsigned long long result = ::bench::slow_fib<28, 19272>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_19272
