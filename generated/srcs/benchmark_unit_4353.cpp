#include "bench/fib.hpp"

// RE Benchmark TU 4353 of 20000 (depth=28, stamp="default")
namespace bench_tu_4353 {
constexpr unsigned long long result = ::bench::slow_fib<28, 4353>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_4353
