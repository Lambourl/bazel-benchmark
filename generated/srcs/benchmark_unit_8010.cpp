#include "bench/fib.hpp"

// RE Benchmark TU 8010 of 20000 (depth=28, stamp="default")
namespace bench_tu_8010 {
constexpr unsigned long long result = ::bench::slow_fib<28, 8010>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_8010
