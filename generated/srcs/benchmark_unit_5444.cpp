#include "bench/fib.hpp"

// RE Benchmark TU 5444 of 20000 (depth=28, stamp="default")
namespace bench_tu_5444 {
constexpr unsigned long long result = ::bench::slow_fib<28, 5444>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_5444
