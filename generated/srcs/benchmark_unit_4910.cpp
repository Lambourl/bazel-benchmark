#include "bench/fib.hpp"

// RE Benchmark TU 4910 of 20000 (depth=28, stamp="default")
namespace bench_tu_4910 {
constexpr unsigned long long result = ::bench::slow_fib<28, 4910>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_4910
