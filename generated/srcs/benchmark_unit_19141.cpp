#include "bench/fib.hpp"

// RE Benchmark TU 19141 of 20000 (depth=28, stamp="default")
namespace bench_tu_19141 {
constexpr unsigned long long result = ::bench::slow_fib<28, 19141>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_19141
